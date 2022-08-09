// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "presence/broadcast_request.h"

#include "absl/strings/string_view.h"
#include "internal/platform/logging.h"
#include "presence/encryption.h"
#include "presence/presence_identity.h"

namespace nearby {
namespace presence {
constexpr size_t kSaltSize = 2;

BasePresenceRequestBuilder& BasePresenceRequestBuilder::SetSalt(
    absl::string_view salt) {
  if (salt.size() != kSaltSize) {
    NEARBY_LOG(WARNING, "Unsupported salt length: %d", salt.size());
  } else {
    salt_ = salt;
  }
  return *this;
}
BasePresenceRequestBuilder& BasePresenceRequestBuilder::SetTxPower(
    int8_t tx_power) {
  tx_power_ = tx_power;
  return *this;
}

BasePresenceRequestBuilder& BasePresenceRequestBuilder::SetAction(
    const Action& action) {
  action_ = action;
  return *this;
}

BasePresenceRequestBuilder::operator BroadcastRequest() const {
  BroadcastRequest::BasePresence presence{.identity = identity_,
                                          .action = action_};
  BroadcastRequest broadcast_request{
      .variant = presence,
      .salt = salt_.size() == kSaltSize
                  ? salt_
                  : Encryption::GenerateRandomByteArray(kSaltSize),
      .tx_power = tx_power_};
  return broadcast_request;
}

}  // namespace presence
}  // namespace nearby
