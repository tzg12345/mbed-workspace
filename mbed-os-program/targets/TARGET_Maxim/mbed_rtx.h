/* mbed Microcontroller Library
 * Copyright (c) 2016 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MBED_MBED_RTX_H
#define MBED_MBED_RTX_H

#if defined(TARGET_MAX32600)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20008000UL)
#endif

#elif defined(TARGET_MAX32610)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20008000UL)
#endif

#elif defined(TARGET_MAX32620) || defined(TARGET_MAX32620C)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20040000UL)
#endif

#elif defined(TARGET_MAX32625)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20028000UL)
#endif

#elif defined(TARGET_MAX32630)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20080000UL)
#endif

#elif defined(TARGET_MAX32660)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20018000UL)
#endif

#elif defined(TARGET_MAX32670)

#ifndef INITIAL_SP
#define INITIAL_SP              (0x20028000UL)
#endif

#endif

#endif  // MBED_MBED_RTX_H
