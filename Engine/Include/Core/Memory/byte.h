/**
 * Mystic Game Engine (MGE)
 *
 * @path [ROOT]/Engine/Include/Core/Memory/Byte.h
 *
 * @file Byte.h
 *
 * @brief Header file for byte.
 *
 * This is header-only, so it do not have byte.cpp
 */
#pragma once

#include "Types/StandardTypes.h"
#include "Macros/Forceinline.h"
#include "Traits/EnableIf.h"
#include "Traits/IsIntegral.h"

namespace MGE::Core::Memory {

/**
 * @brief Custom type-safe byte to hold data.
 * 
 * This implementation is inspired by std::byte.
 */
enum class Byte : unsigned char {};

/**
 * @brief Bitwise OR operator.
 */
MGE_FORCEINLINE constexpr Byte operator|(Byte lhs, Byte rhs) noexcept {
    return static_cast<Byte>(static_cast<unsigned char>(lhs) |
                             static_cast<unsigned char>(rhs));
}

/**
 * @brief Bitwise AND operator.
 */
MGE_FORCEINLINE constexpr Byte operator&(Byte lhs, Byte rhs) noexcept {
    return static_cast<Byte>(static_cast<unsigned char>(lhs) &
                             static_cast<unsigned char>(rhs));
}

/**
 * @brief Bitwise XOR operator.
 */
MGE_FORCEINLINE constexpr Byte operator^(Byte lhs, Byte rhs) noexcept {
    return static_cast<Byte>(static_cast<unsigned char>(lhs) ^
                             static_cast<unsigned char>(rhs));
}

/**
 * @brief Bitwise signed left shift operator.
 */
MGE_FORCEINLINE constexpr Byte operator<<(Byte lhs, i32 shift) noexcept {
    return static_cast<Byte>(static_cast<unsigned char>(lhs) << shift);
}

/**
 * @brief Bitwise signed right shift operator.
 */
MGE_FORCEINLINE constexpr Byte operator>>(Byte lhs, i32 shift) noexcept {
    return static_cast<Byte>(static_cast<unsigned char>(lhs) >> shift);
}

/**
 * @brief Bitwise unsigned left shift operator.
 */
MGE_FORCEINLINE constexpr Byte operator<<(Byte lhs, u32 shift) noexcept {
    return static_cast<Byte>(static_cast<unsigned char>(lhs) << shift);
}

/**
 * @brief Bitwise unsigned right shift operator.
 */
MGE_FORCEINLINE constexpr Byte operator>>(Byte lhs, u32 shift) noexcept {
    return static_cast<Byte>(static_cast<unsigned char>(lhs) >> shift);
}

/**
 * @brief Bitwise NOT operator.
 */
MGE_FORCEINLINE constexpr Byte operator~(Byte b) noexcept {
    return static_cast<Byte>(~static_cast<unsigned char>(b));
}

/**
 * @brief Compound bitwise OR assignment operator.
 */
MGE_FORCEINLINE constexpr Byte& operator|=(Byte& lhs, const Byte& rhs) noexcept {
    return lhs = lhs | rhs;
}

/**
 * @brief Compound bitwise AND assignment operator.
 */
MGE_FORCEINLINE constexpr Byte& operator&=(Byte& lhs, const Byte& rhs) noexcept {
    return lhs = lhs & rhs;
}

/**
 * @brief Compound bitwise XOR assignment operator.
 */
MGE_FORCEINLINE constexpr Byte& operator^=(Byte& lhs, const Byte& rhs) noexcept {
    return lhs = lhs ^ rhs;
}

/**
 * @brief Compound signed left shift assignment operator.
 */
MGE_FORCEINLINE constexpr Byte& operator<<=(Byte& lhs, i32 shift) noexcept {
    return lhs = lhs << shift;
}

/**
 * @brief Compound signed right shift assignment operator.
 */
MGE_FORCEINLINE constexpr Byte& operator>>=(Byte& lhs, i32 shift) noexcept {
    return lhs = lhs >> shift;
}

/**
 * @brief Compound unsigned left shift assignment operator.
 */
MGE_FORCEINLINE constexpr Byte& operator<<=(Byte& lhs, u32 shift) noexcept {
    return lhs = lhs << shift;
}

/**
 * @brief Compound unsigned right shift assignment operator.
 */
MGE_FORCEINLINE constexpr Byte& operator>>=(Byte& lhs, u32 shift) noexcept {
    return lhs = lhs >> shift;
}

/**
 * @brief Integer conversion.
 *
 * Converts a Byte into a integral value.
 */
template <typename Type, typename = Trait::EnableIf_t<Trait::IsIntegral<Type>>>
MGE_FORCEINLINE Type to_integer(Byte b) noexcept {
    return static_cast<Type>(b);
}

/**
 * @brief Byte conversion.
 *
 * Converts a integral value to Byte.
 * Should be used without excceding unsigned char's range of [0, 225], to avoid data loss.
 */
template <typename Type, typename = Trait::EnableIf_t<Trait::IsIntegral<Type>>>
MGE_FORCEINLINE Byte to_byte(Type val) noexcept {
    return static_cast<Byte>(val);
}

/**
 * @brief Pointer conversion.
 *
 * Converts a pointer to Byte into a pointer to another type.
 */
template <typename Type>
MGE_FORCEINLINE Type* to_pointer(Byte* p) noexcept {
    return reinterpret_cast<Type*>(p);
}

/**
 * @brief Const pointer conversion.
 *
 * Converts a const pointer to Byte into a const pointer to another type.
 */
template <typename Type>
MGE_FORCEINLINE const Type* to_pointer(const Byte* p) noexcept {
    return reinterpret_cast<const Type*>(p);
}

} // MGE::Core::Memory
