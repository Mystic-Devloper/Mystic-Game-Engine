/**
 * Mystic Game Engine (MGE)
 *
 * @path [ROOT]/Engine/Include/Core/Macros/OSDetection.h
 *
 * @file OSDetection.h
 *
 * @brief Header file for OS(Operating System) detection.
 */
#pragma once

/**
 * @brief Uses Compiler pre-defined macros for OS detection.
 *
 * Compilers have pre-defined macros for OSes, so we can use it for OS detection.
 * 
 * @sa MGE_OS_BITS For OS bits detection.
 */
#if defined(_WIN64) || defined(_WIN32) /* _WIN64 is defiend for all 64 bits Windows OSes, while _WIN32 is defined for all 64 bits and 32 bits Window OSes. */
    /**
     * @brief For Windows OS, define MGE_OS_NAME as "Windows".
     */
    #define MGE_OS_NAME "Windows"
#elif defined(__APPLE__) && defined(__MACH__) /* __APPLE__ is defined for all Apple devices, and __MACH__ is defined for MacOS. */
    /**
     * @brief For MacOS, define MGE_OS_NAME as "MacOS".
     */
    #define MGE_OS_NAME "MacOS"
#elif defined(__linux__) /* __linux__ is defined for all Linux distribution (i.e., Arch, Ubuntu, etc...) */
    /**
     * @brief For Linux OS, define MGE_OS_NAME as "Linux".
     */
    #define MGE_OS_NAME "Linux"
#elif defined(__FreeBSD__) /* __FreeBSD__ is defined for all FreeBSD OSes, well I have never used it, but it is not so rare to have a FreeBSD OS, I guess. */
    /**
     * @brief For FreeBSD OS, define MGE_OS_NAME as "FreeBSD".
     */
    #define MGE_OS_NAME "FreeBSD"
#else /* Fallback for other OSes, do they exist? Well, they can. */
    /**
     * @brief For default, define MGE_OS_NAME as "Unknown".
     */
    #define MGE_OS_NAME "Unknown"
#endif

/**
 * @brief Uses Compiler pre-defined macros for OS bits detection.
 *
 * Compilers have pre-defined macros for OSes, so we can use it for OS bits detection.
 * 
 * @sa MGE_OS_NAME For OS detection.
 */
#if defined(_WIN64) /* For Windows 64 bits */ \
    || defined(__x86_64__) /* For x86-64 */   \
    || defined(__ppc64__) /* For PowerPC 64 bits */ \
    || defined(__aarch64__) /* For ARM 64 bits, ARMv8 and ARMv9 */ \
    || defined(_M_AMD64) /* For AMD64 */
    /**
     * @brief For 64 bits architecture, define MGE_OS_BITS as 64.
     */
    #define MGE_OS_BITS 64
#else
    /**
     * @brief if not, the default is 32 bits though, it can be 16 bits or even 8 bits.
     *        Which fool be running 16 bits nowadays. So, it is virtually impossible.
     * 
     * For 32 bits architecture, define MGE_OS_BITS as 32.
     */
    #define MGE_OS_BITS 32
#endif
