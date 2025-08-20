/**
 * Mystic Game Engine (MGE)
 *
 * @path [ROOT]/Engine/Include/Core/Macros/Stringify.h
 *
 * @file Stringify.h
 *
 * @brief Header file for stringify macro helper.
 *
 * @sa token_paste.h
 */
#pragma once

/**
 * @brief Stringify macro's helper macro to ensure proper expansion before stringification.
 *
 * This macro is private macro and is not be intended to be used outside here.
 */
#define MGE_STRINGIFY_HELPER_PRIVATE(token) #token

/**
 * @brief Stringyify macro, converts a token to string.
 *
 * This macro uses MGE_STRINGIFY_HELPER_PRIVATE(token) for proper expansion first.
 */
#define MGE_STRINGIFY(token) MGE_STRINGIFY_HELPER_PRIVATE(token)
