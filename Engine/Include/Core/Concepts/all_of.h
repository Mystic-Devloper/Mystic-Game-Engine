/**
 * Mystic Game Engine (MGE)
 * 
 * @path [ROOT]/Engine/Include/Core/Concepts/all_of.h
 *
 * @file all_of.h
 *
 * @brief Header file for all of concept.
 */
#pragma once

namespace MGE::Core::Concept {

/**
 * @brief Checks if Type is from all the concepts in the list.
 *
 * This concept is only satisfied if Type staisfies all the concepts.
 */
template <typename Type, typename... Concepts>
concept AllOf = (Concepts<Type> && ...);

} // namespace MGE::Core::Concept
