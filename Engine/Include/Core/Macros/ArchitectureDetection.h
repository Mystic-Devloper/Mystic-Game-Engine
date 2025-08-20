/**
 * @path [ROOT]/Engine/Include/Core/Macros/ArchitectureDetection.h
 *
 * @file ArchitectureDetection.h
 *
 * @brief Header file for architecture detection.
 *
 * @note for architecture detection functions and strings, see Core/Platform/runtime_architecture_detection.h
 */
#pragma once

/**
 * @brief Architecture IDs for brevity in architecture specific code.
 */
#define MGE_ARCH_X86_64  0
#define MGE_ARCH_ARM64   1
#define MGE_ARCH_X86     3
#define MGE_ARCH_UNKNOWN 5

/**
 * @brief Uses Compiler pre-defined macros for architecture detection.
 *
 * Compilers have pre-defined macros for architecture detection.
 */
#if defined(__x86_64__) /* This macro is a standard macro defined for all x86-64 machines. */ \
    || defined(_M_X64)  /* This is target macro meaning, this targets x86-64 arch. So native machine can be or not, a x86-64 machine. */
    /**
     * @brief For x86-64 machine, define MGE_ARCH_NAME as x86_64.
     */
    #define MGE_ARCH_NAME "x86_64"
    
    /**
     * @brief For x86-64 machine, set MGE_ARCH_ID to MGE_ARCH_X86_64.
     */
    #define MGE_ARCH_ID MGE_ARCH_X86_64

#elif defined(__aarch64__) /* This macro is a standard macro defined for all ARM64 machines. */ \
      || defined(_M_ARM64) /* This is target macro meaning, this targets ARM64 arch. So native machine can be or not, a ARM64 machine. */
    /**
     * @brief For ARM64 machine, define MGE_ARCH_NAME as ARM64.
     */
    #define MGE_ARCH_NAME "ARM64"
    
    /**
     * @brief For ARM64, set MGE_ARCH_ID to MGE_ARCH_ARM64.
     */
    #define MGE_ARCH_ID MGE_ARCH_ARM64

#elif defined(__arm__) /* This macro is a standard macro defined for all ARM32 machines. */ \
    || defined(_M_ARM)  /* This is target macro meaning, this targets ARM32 arch. So native machine can be or not, a ARM32 machine. */
    /**
     * @brief For ARM32 machine, define MGE_ARCH_NAME as ARM32.
     */
    #define MGE_ARCH_NAME "ARM32"
    
    /**
     * @brief For ARM32 machine, set MGE_ARCH_ID to MGE_ARCH_ARM32.
     */
    #define MGE_ARCH_ID MGE_ARCH_ARM32

#elif defined(__i386__) /* This macro is a standard macro defined for all x86 machines. */ \
      || defined(_M_IX86) /* This is target macro meaning, this targets x86 arch. So native machine can be or not, a x86 machine. */
    /**
     * @brief For x86 machine, define MGE_ARCH_NAME as x86.
     */
    #define MGE_ARCH_NAME "x86"
    
    /**
     * @brief For x86, set MGE_ARCH_ID to MGE_ARCH_X86.
     */
    #define MGE_ARCH_ID MGE_ARCH_X86
#else /* Fallback for all other architectures. Do people even use other architecture? */
    /**
     * @brief For default, define MGE_ARCH_NAME as Unknown.
     */
    #define MGE_ARCH_NAME "Unknown"

    /**
     * @brief For default, set MGE_ARCH_ID to MGE_ARCH_UNKNOWN.
     */
    #define MGE_ARCH_ID MGE_ARCH_UNKNOWN
#endif

/**
 * @brief Checks for unknown architectures.
 */
#if MGE_ARCH_ID == MGE_ARCH_UNKNOWN
    #error "[MGE ERROR] - ARCHITECTURE - Build on Non-Supported Architecture."
#endif


/**
 * @brief Macro for quick toggling based on known or unknown architecture.
 */
#if MGE_ARCH_ID != MGE_ARCH_UNKNOWN
    /**
     * @brief if architectrue id is known, then architecture is supported.
     */
    #define MGE_ARCH_IS_KNOWN 1
#else
    /**
     * @brief if architecture id is not known, then architecture is not supported.
     */
    #define MGE_ARCH_IS_KNOWN 0
#endif
