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

#ifndef IROHA_POSTGRES_COMMAND_EXECUTOR_HPP
#define IROHA_POSTGRES_COMMAND_EXECUTOR_HPP

#include <ametsuchi/command_executor.hpp>
#include <pqxx/nontransaction>

namespace iroha {
  namespace ametsuchi {
    class PostgresCommandExecutor : public CommandExecutor {
     public:
      PostgresCommandExecutor(std::shared_ptr<pqxx::nontransaction> transaction);
      bool execute(const dao::Command &command) override;
     private:
      std::shared_ptr<pqxx::nontransaction> transaction_;
    };

  }// namespace ametsuchi
}// namespace iroha

#endif //IROHA_POSTGRES_COMMAND_EXECUTOR_HPP
