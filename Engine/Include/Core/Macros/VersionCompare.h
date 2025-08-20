/**
 * Mystic Game Engine (MGE)
 *
 * @path [ROOT]/Engine/Include/Core/Macros/VersionCompare.h
 * 
 * @file VersionCompare.h
 * 
 * @brief Header file for version comparison macros.
 * 
 * @sa Version.h
 */
#pragma once
#include "Macros/Version.h"

/**
 * @brief Creates an integer representation of a version number for comparison.
 *
 * This macro converts a MAJOR.MINOR.PATCH version into a single integer.
 * For example, MGE_VERSION_MAKE(1, 2, 3) becomes (1 * 10000 + 2 * 100 + 3) = 10203.
 * This allows for simple numeric comparisons.
 */
#define MGE_VERSION_MAKE(Major, Minor, Patch) \
    (Major * 10000 + Minor * 100 + Patch)

/**
 * @brief Checks if the current engine version is newer than a specified version.
 */
#define MGE_VERSION_NEWER_THAN(Major, Minor, Patch) (MGE_VERSION_INT > MGE_VERSION_MAKE(Major, Minor, Patch))

/**
 * @brief Checks if the current engine version is older than a specified version.
 */
#define MGE_VERSION_OLDER_THAN(Major, Minor, Patch) (MGE_VERSION_INT < MGE_VERSION_MAKE(Major, Minor, Patch))

/**
 * @brief Checks if the current engine version is exactly equal to a specified version.
 */
#define MGE_VERSION_EQUAL_TO(Major, Minor, Patch)   (MGE_VERSION_INT == MGE_VERSION_MAKE(Major, Minor, Patch))

/**
 * @brief Checks if the current engine version is at least a specified version (greater than or equal to).
 */
#define MGE_VERSION_AT_LEAST(Major, Minor, Patch)   (MGE_VERSION_INT >= MGE_VERSION_MAKE(Major, Minor, Patch))

/**
 * @brief Checks if the current engine version is at most a specified version (less than or equal to).
 */
#define MGE_VERSION_AT_MOST(Major, Minor, Patch)    (MGE_VERSION_INT <= MGE_VERSION_MAKE(Major, Minor, Patch))

/**
 * @brief Checks if the current engine version is within a specified range (inclusive).
 */
#define MGE_VERSION_IN_RANGE(Major_Min, Minor_Min, Patch_Min, Major_Max, Minor_Max, Patch_Max) \
    (MGE_VERSION_AT_LEAST(Major_Min, Minor_Min, Patch_Min) && MGE_VERSION_AT_MOST(Major_Max, Minor_Max, Patch_Max))

/**
 * @brief Checks if two specified versions are equal.
 */
#define MGE_VERSION_IS_EQUAL(Major1, Minor1, Patch1, Major2, Minor2, Patch2) \
    (MGE_VERSION_MAKE(Major1, Minor1, Patch1) == MGE_VERSION_MAKE(Major2, Minor2, Patch2))

/**
 * @brief Checks if the current stability is "stable".
 */
#define MGE_VERSION_IS_STABLE (MGE_VERSION_STABLITY == MGE_VERSION_STABLITY_STABLE)

/**
 * @brief Checks if the current stability is "alpha".
 */
#define MGE_VERSION_IS_APLHA  (MGE_VERSION_STABLITY == MGE_VERSION_STABLITY_ALPHA)

/**
 * @brief Checks if the current stability is "beta".
 */
#define MGE_VERSION_IS_BETA   (MGE_VERSION_STABLITY == MGE_VERSION_STABLITY_BETA)

/**
 * @brief Checks if the current stability is a pre-release version (not stable).
 */
#define MGE_VERSION_IS_PRERELEASE (!MGE_VERSION_IS_STABLE)

/**
 * @brief Checks if the current stability is equal to a specified stability stage.
 */
#define MGE_VERSION_IS_STABILITY_EQUAL_TO(Stablity) (MGE_VERSION_STABLITY == Stablity)

/**
 * @brief Checks if the current stability is at least as stable as the specified stage.
 *
 * This works because smaller integer values represent higher stability.
 * (Stable = 0, Alpha = 1, Beta = 2)
 */
#define MGE_VERSION_IS_STABILITY_AT_LEAST(Stablity) (MGE_VERSION_STABLITY <= Stablity)
