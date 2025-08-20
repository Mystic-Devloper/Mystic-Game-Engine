/**
 * Mystic Game Engine (MGE)
 *
 * @path [ROOT]/Engine/Include/Core/Memory/buffer.h
 *
 * @file buffer.h
 *
 * @brief Header file for buffer.
 */
#pragma once

namespace MGE::Core::Memory { 

/**
 * @brief Forward declaration of Byte.
 *
 * @sa Located in Include/Core/Memory/byte.h
 */
enum class Byte : unsigned char;

/**
 * @brief Represents a single fixed-size data buffer.
 *
 * This struct holds a pointer to the raw data within a larger
 * memory block and its size. It's a simple handle to a pre-allocated
 * chunk of memory.
 */
struct Buffer {
    Byte* data = nullptr;
    size_t size = 0;
};

} // namespace MGE::Core::Memory
