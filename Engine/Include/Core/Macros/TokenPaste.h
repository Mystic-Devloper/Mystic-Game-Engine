/**
 * Mystic Game Engine (MGE)
 *
 * @path [ROOT]/Engine/Include/Core/Macros/TokenPaste.h
 *
 * @file TokenPaste.h
 *
 * @brief Header file for token pasting macro helper.
 *
 * @sa stringify.h
 */
#pragma once

/**
 * @brief Token paste macro's helper macro to ensure proper expansion before pasting.
 *
 * This macro is private macro and is not be intended to be used outside here.
 */
#define MGE_TOKEN_PASTE_HELPER_PRIVATE(token1, token2) token##token2

/**
 * @brief Token paste macro, it pastes 2 tokens into one (a.k.a., concat).
 *
 * This macro uses MGE_TOKEN_PASTE_HELPER_PRIVATE(token1, token2) for proper expansion first.
 */
#define MGE_TOKEN_PASTE(token1, token2) MGE_TOKEN_PASTE_HELPER_PRIVATE(token1, token2)
