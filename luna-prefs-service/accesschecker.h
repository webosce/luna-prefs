// Copyright (c) 2015-2024 LG Electronics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0

#ifndef ACCESSCHECKER_H
#define ACCESSCHECKER_H

#include <luna-service2/lunaservice.h>

typedef void (*callbackType)(LSHandle*, LSMessage*, bool);

bool checkAccess(LSHandle * handle, LSMessage * message, const char *uri_to_check, callbackType callback);

#endif /* ACCESSCHECKER_H */
