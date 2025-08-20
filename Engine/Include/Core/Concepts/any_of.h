/**
 * Mystic Game Engine (MGE)
 * 
 * @path [ROOT]/Engine/Include/Core/Concepts/any_of.h
 *
 * @file any_of.h
 *
 * @brief Header file for any of concept.
 */
#pragma once

#include <type_traits> // For std::is_same_v

namespace MGE::Core::Concept {

/**
 * @brief Check if Type is from the list of Options.
 *
 * This concept is only satisfied if Type is a exactly from the list of Options.
 */
template <typename Type, typename... Options>
concept AnyOf = (std::is_same_v<Type, Options> || ...);

} // namespace MGE::Core::Concept
