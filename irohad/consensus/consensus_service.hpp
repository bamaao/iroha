/**
 * Copyright Soramitsu Co., Ltd. 2017 All Rights Reserved.
 * http://soramitsu.co.jp
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef IROHA_CONSENSUS_GRPC_HPP
#define IROHA_CONSENSUS_GRPC_HPP

#include <consensus.grpc.pb.h>
#include <consensus.pb.h>

#include <uvw/emitter.hpp>
#include <consensus/messages.hpp>

namespace iroha {

  using ServerContext = grpc::ServerContext;
  using Status = grpc::Status;

  class ConsensusService final : public iroha::consensus::Sumeragi::Service,
                                 public uvw::Emitter<ConsensusService> {
   public:
    Status SendProposal(ServerContext* context, const Proposal* request, Ack* reply) override;
    Status SendVote(ServerContext* context, const Vote* request, Ack* reply) override;
    Status SendCommit(ServerContext* context, const Commit* request, Ack* reply) override;
    Status SendAbort(ServerContext* context, const Abort* request, Ack* reply) override;
  };
}

#endif  // IROHA_CONSENSUS_GRPC_HPP
