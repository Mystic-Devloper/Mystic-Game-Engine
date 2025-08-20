/**
 * Mystic Game Engine (MGE)
 *
 * @path [ROOT]/Engine/Include/Core/Traits/enable_if.h
 *
 * @file enable_if.h
 *
 * @brief Header file for enable if trait.
 */
#pragma once

#include <type_traits> // For std::enable_if

namespace MGE::Core::Trait {

/**
 * @brief Wrapper around std::enable_if.
 */
template <bool Bool, class Class = void>
struct EnableIf {
    using Type = std::enable_if<Bool, Class>::type;
};

/**
 * @brief Helper alias for EnableIf, similar to std::enable_if_t.
 */
template <bool Bool, class Class = void>
using EnableIf_t = EnableIf<Bool, Class>::Type;

} // MGE::Core::Trait
