/**
 * Mystic Game Engine (MGE)
 *
 * @path [ROOT]/Engine/Include/Core/Macros/Forceinline.h
 *
 * @file Forceinline.h
 *
 * @brief Header file for forceinline macro.
 *
 */
#pragma once

#include "Macros/CompilerDetection.h"

/**
 * @brief Defines Forceinline for MGE.
 *
 * Forceinline is stronger hint to compiler to inline a function, often this overrides compiler's
 * builtin benifit heuristics and gurantees to inline a function, the key here is often not always.
 */
#if MGE_COMPILER_ID == MGE_COMPILER_MSVC
    /**
     * @brief For MSVC, define MGE_FORCEINLINE as __forceinline.
     */
    #define MGE_FORCEINLINE __forceinline

#elif MGE_COMPILER_ID == MGE_COMPILER_GCC \
      || MGE_COMPILER_ID == MGE_COMPILER_CLANG
    /**
     * @brief For GCC or Clang, define MGE_FORCEINLINE as __attribute__((always_inline)).
     */
    #define MGE_FORCEINLINE __attribute__((always_inline))

#else /* Fallback to other compilers, though we do not support them. */
    /**
     * @brief For default, use C++'s inline.
     */
    #define MGE_FORCEINLINE inline
#endif
