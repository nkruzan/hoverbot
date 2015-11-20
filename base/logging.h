// Copyright 2015 Mikhail Afanasyev.  All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <log4cpp/Category.hh>

namespace boost {
namespace program_options {
class options_description;
}
}

namespace mjmech {
namespace base {

void AddLoggingOptions(boost::program_options::options_description*);

// Call after program_options has been notified, or if you do not support
// program options.
void InitLogging();


typedef log4cpp::Category& LogRef;
// Get a LogRef with a given name.
//  - there is a .-separated hierachy -- '-t cd' will enable 'cd.stats' logger
//  - set the first element to C++ file name (lowercase, _-separated)
LogRef GetLogInstance(const std::string& name);

}
}