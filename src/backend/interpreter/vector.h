/* This file is part of the dynarmic project.
 * Copyright (c) 2020 MerryMage
 * This software may be used and distributed according to the terms of the GNU
 * General Public License version 2 or any later version.
 */

#pragma once

#include <array>

#include "common/bit_util.h"
#include "common/common_types.h"

namespace Dynarmic::Backend::Interpreter {

template <typename T>
using VectorOf = std::array<T, 128 / Common::BitSize<T>()>;
using Vector = std::array<u64, 2>;

} // namespace Dynarmic::Backend::Interpreter
