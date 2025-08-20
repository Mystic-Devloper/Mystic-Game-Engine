/**
 * Mystic Game Engine (MGE)
 *
 * @path [ROOT]/Engine/Include/Core/Macros/Version.h
 *
 * @file Version.h
 *
 * @brief Header file for version macros.
 *
 * @sa VersionCompare.h
 */
#pragma once

#include "Macros/Stringify.h"

/**
 * @brief Versioning of engine, using Semantic Versioning (i.e., MAJOR.MINOR.PATCH)
 * 
 * Linus would be proud of us!
 */
#define MGE_VERSION_MAJOR 0
#define MGE_VERSION_MINOR 2
#define MGE_VERSION_PATCH 1

/**
 * @brief Version stablity.
 */
#define MGE_VERSION_STABLITY_STABLE 0
#define MGE_VERSION_STABLITY_ALPHA  1
#define MGE_VERSION_STABLITY_BETA   2

/**
 * @brief Current Stablity.
 */
#define MGE_VERSION_STABLITY MGE_VERSION_STABLITY_ALPHA

/**
 * @brief Defines Tag based on stablity.
 */
#if (MGE_VERSION_STABLITY == MGE_VERSION_STABLITY_ALPHA)
  #define MGE_VERSION_TAG "alpha"
#elif (MGE_VERSION_STABLITY == MGE_VERSION_STABLITY_BETA)
  #define MGE_VERSION_TAG "beta"
#elif (MGE_VERSION_STABLITY == MGE_VERSION_STABLITY_STABLE)
  #define MGE_VERSION_TAG "stable"
#else
  #warning "[MGE ERROR] - VERSION - Incorrect Engine Stablity. Might have occured due to internal errors."
#endif

/**
 * @brief Compilation Date.
 */
#define MGE_VERSION_DATE __DATE__

/**
 * @brief Author Info.
 */
#define MGE_VERSION_AUTHOR "Mystic Devloper"

/**
 * @brief String Version, i.e., 0.2.1
 */
#define MGE_VERSION_STRING MGE_STRINGIFY(MGE_VERSION_MAJOR) "." MGE_STRINGIFY(MGE_VERSION_MINOR) "." MGE_STRINGIFY(MGE_VERSION_PATCH) // i.e., 0.2.1
#define MGE_FULL_VERSION_STRING MGE_STRINGIFY(MGE_VERSION_MAJOR) "." MGE_STRINGIFY(MGE_VERSION_MINOR) "." MGE_STRINGIFY(MGE_VERSION_PATCH) "-" MGE_VERSION_TAG // i.e., 0.2.1-aplha
#define MGE_FULL_VERSION_WITH_COMPILE_DATE_STRING MGE_STRINGIFY(MGE_VERSION_MAJOR) "." MGE_STRINGIFY(MGE_VERSION_MINOR) "." MGE_STRINGIFY(MGE_VERSION_PATCH) "-" MGE_VERSION_TAG " (" MGE_VERSION_DATE ")" // i.e., 0.2.1-alpha (18 Aug, 2025)

/**
 * @brief Integer Version for comparision.
 */
#define MGE_VERSION_INT MGE_VERSION_MAJOR * 10000 + \
                        MGE_VERSION_MINOR * 100 + \
                        MGE_VERSION_PATCH
