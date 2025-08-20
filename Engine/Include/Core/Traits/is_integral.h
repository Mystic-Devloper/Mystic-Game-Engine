/**
 * Mystic Game Engine (MGE)
 *
 * @path [ROOT]/Engine/Include/Core/Traits/is_integral.h
 *
 * @file is_integral.h
 *
 * @brief Header file for is integral trait.
 */
#pragma once

#include <type_traits> // For std::is_integral

namespace MGE::Core::Trait {

/**
 * @brief Wrapper around std::is_integral.
 */
template <typename Type>
struct IsIntegral {
    static constexpr bool Value = std::is_integral<Type>::value;
};

/**
 * @brief Helper alias for IsIntegral, similar to std::is_integral_v.
 */
template <typename Type>
static constexpr bool IsIntegral_v = IsIntegral<Type>::Value;

} // MGE::Core::Trait
