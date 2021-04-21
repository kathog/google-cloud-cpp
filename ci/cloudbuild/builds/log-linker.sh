#!/bin/bash
#
# Copyright 2021 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

set -eu

source "$(dirname "$0")/../../lib/init.sh"
source module /ci/lib/io.sh

if [[ -z "${LOG_LINKER_PAT:-}" ]]; then
  io::log_h2 "No Personal Access Token. Skipping Log Linker."
  exit
fi

if [[ -z "${PR_NUMBER:-}" ]]; then
  io::log_h2 "Missing PR_NUMBER. Skipping Log Linker."
  exit
fi

io::log_h2 "Authenticating"
gh auth login --with-token <<<"${LOG_LINKER_PAT}"

console_link="https://console.cloud.google.com/cloud-build/builds?project=cloud-cpp-testing-resources"
storage_link="http://storage.googleapis.com/cloud-cpp-community-publiclogs/logs/google-cloud-cpp/${PR_NUMBER}/${COMMIT_SHA}"
body="$(
  cat <<EOF
**Google Cloud Build Logs**
For commit: \`${COMMIT_SHA}\`

* [Cloud Build Console](${console_link}) (for team members with access)
* [Cloud Storage Logs Bucket](${storage_link}) (public access *coming soon*)

:information_source: NOTE: Kokoro logs are linked from "Details" below.
EOF
)"

io::log_h2 "Commenting on ${PR_NUMBER}"
echo "${body}"
# TODO(#6295): See if there's a way to edit an existing log-linker comment
# rather than creating a new one.
gh --repo googleapis/google-cloud-cpp pr comment "${PR_NUMBER}" --body "${body}"