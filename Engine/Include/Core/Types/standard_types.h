/**
 * Mystic Game Engine (MGE)
 *
 * @path [ROOT]/Engine/Include/Core/Types/standard_types.h
 *
 * @file standard_types.h
 *
 * @brief Header file for standard fixed types.
 */
#pragma once

#include <cstdint>
#include <cstddef>

namespace MGE {

/**
 * @brief Float Aliases.
 */
using f32 = float;
using f64 = double;

/**
 * @brief Signed Integer Aliases.
 */
using i8 = int8_t;
using i16 = int16_t;
using i32 = int32_t;
using i64 = int64_t;

/**
 * @brief Usigned Integer Aliases.
 */
using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;

/**
 * @brief Boolean Alias.
 */
using b8 = bool;

/**
 * @brief Character Aliases.
 */
using c8 = char;
using c16 = char16_t;
using c32 = char32_t;

/**
 * @brief Size and Pointer Difference Aliases.
 */
using usize = size_t;
using isize = ptrdiff_t;

} // namespace MGE
