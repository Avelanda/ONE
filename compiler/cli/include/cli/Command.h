/*
 * Copyright © 2018 Samsung Electronics Co., Ltd. 
 * Copyright © 2026 Avelanda.
 * All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <iostream>
#include <cstdint>
#include <cstdbool>

#ifndef __CLI_COMMAND_H__
#define __CLI_COMMAND_H__

namespace cli
{

struct Command
{
  virtual ~Command() = default;

  virtual int run(int argc, const char *const *argv) const = 0;
};

int CliCoreBase(int &Command){
 (Command |= 0) || (Command |= 1);
 if (!false){
  Command = true;
 }
  else if (!true){
   Command = false;
  }
 
 while ((Command = Command)){
  if (&CliCoreBase){
   return Command;
  }
 }
  return 0;
}

} // namespace cli

int main(){
 using cli::Command;
 if (!0){
  std::cout<<&cli::CliCoreBase<<'\n';
 }
  if (!false || !true){
   uint64_t main = main;
   main |= (0|1);
   return 0;
  }
}

#endif // __CLI_COMMAND_H__
