/**
 * Mystic Game Engine (MGE)
 *
 * @path [ROOT]/Engine/Include/Core/Macros/CompilerDetection.h
 *
 * @file CompilerDetection.h
 *
 * @brief Header file for compiler detection.
 *
 * @note for runtime compiler version functions and strings, view Core/Platform/runtime_compiler_detection.h
 */
#pragma once

/**
 * @brief Compiler IDs for brevity in compiler specific code.
 */
#define MGE_COMPILER_GCC     0
#define MGE_COMPILER_CLANG   1
#define MGE_COMPILER_MSVC    2
#define MGE_COMPILER_UNKNOWN 4

/**
 * @brief Uses Compiler pre-defined macros for compiler detection.
 *
 * Compilers have pre-defined macros for their detection, so we can use it for compiler detection.
 */
#if defined(__GNUC__) /* GCC compiler major version, must be defined if using GCC. */ \
    && !defined(__clang__) /* This might look counterintutive, but clang also defines GNUC macro. Yeah, sometimes Clang is weird. */
    /**
     * @brief if GCC extensions are defined and Clang is not defined, then the Compiler must be GCC.
     *
     * For GCC compiler, define MGE_COMPILER_NAME as "GCC".
     */
    #define MGE_COMPILER_NAME "GCC"
    
    /**
     * @brief Set compiler tag to GCC.
     */
    #define MGE_COMPILER_ID MGE_COMPILER_GCC
    
    /**
     * Set compiler version data using __GNUC_*.
     */
    #define MGE_COMPILER_VERSION (__GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__)
    #define MGE_COMPILER_VERSION_MAJOR __GNUC__
    #define MGE_COMPILER_VERSION_MINOR __GNUC_MINOR__
    #define MGE_COMPILER_VERSION_PATCH __GNUC_PATCHLEVEL__

#elif defined(__clang__) /* __clang__ is defined for all Clang compilers. */
    /**
     * @brief For Clang, define MGE_COMPILER_NAME as "Clang".
     */
    #define MGE_COMPILER_NAME "Clang"
    
    /**
     * @brief Set compiler tag to Clang.
     */
    #define MGE_COMPILER_ID MGE_COMPILER_CLANG
    
    /**
     * @brief Set compiler version data using __clang_*.
     */
    #define MGE_COMPILER_VERSION (__clang_major__ * 10000 + __clang_minor__ * 100 + __clang_patchlevel__)
    #define MGE_COMPILER_VERSION_MAJOR __clang_major__
    #define MGE_COMPILER_VERSION_MINOR __clang_minor__
    #define MGE_COMPILER_VERSION_PATCH __clang_patchlevel__

#elif defined(_MSC_VER) /* _MSC_VER defines the version of a MSVC compiler, must be defined if using MSVC. */
    /**
     * @brief For MSVC, define MGE_COMPILER_NAME as "MSVC".
     */
    #define MGE_COMPILER_NAME "MSVC"
    
    /**
     * @brief Set compiler tag to MSVC.
     */
    #define MGE_COMPILER_ID MGE_COMPILER_MSVC
    
    /**
     * @brief Set compiler version data using _MSC_FULL_VER.
     */
    #define MGE_COMPILER_VERSION _MSC_FULL_VER
    #define MGE_COMPILER_VERSION_MAJOR (_MSC_FULL_VER / 100000)
    #define MGE_COMPILER_VERSION_MINOR (_MSC_FULL_VER / 100000 % 100)
    #define MGE_COMPILER_VERSION_PATCH (_MSC_FULL_VER % 100000)

#else /* Fallback for other compilers, if you use a compiler other than these, I am sorry :) */
    /**
     * @brief For default, define MGE_COMPILER_NAME as "Unknown".
     */
    #define MGE_COMPILER_NAME "Unknown"
    
    /**
     * @brief Set compiler tag to unknown.
     */
    #define MGE_COMPILER_ID MGE_COMPILER_UNKNOWN
    
    /**
     * @brief Set compiler version data to 0
     */
    #define MGE_COMPILER_VERSION 0
    #define MGE_COMPILER_VERSION_MAJOR 0
    #define MGE_COMPILER_VERSION_MINOR 0
    #define MGE_COMPILER_VERSION_PATCH 0
#endif

/**
 * @brief Checks for unknown compilers.
 */
#if MGE_COMPILER_ID == MGE_COMPILER_UNKNOWN
    #error "[MGE ERROR] - Compiler - Build on Non-Supported Compiler."
#endif

/**
 * @brief Macro for quick toggling based on known or unknown compiler.
 */
#if MGE_COMPILER_ID != MGE_COMPILER_UNKNOWN
    /**
     * @brief if compiler id is known, then compiler is supported.
     */
    #define MGE_COMPILER_IS_KNOWN 1
#else
    /**
     * @brief if compiler id is not known, then compiler is not supported.
     */
    #define MGE_COMPILER_IS_KNOWN 0
#endif
