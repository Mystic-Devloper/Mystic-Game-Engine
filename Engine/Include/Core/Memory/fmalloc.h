/**
 * Mystic Game Engine (MGE)
 *
 * @path [ROOT]/Engine/Include/Core/Memory/fmalloc.h
 *
 * @file fmalloc.h
 *
 * @brief Header file for abstract malloc implementation.
 *
 * Here in FMalloc, F stands for Fundamental.
 */

#include "disable_copy_and_move.h"
#include "standard_types.h"

namespace MGE::Core::Memory {

class FMalloc {
public:
    // Destructor must be virtual in a base class with virtual functions.
    virtual ~FMalloc() = default;

    /**
     * @brief Allocates memory on the heap.
     *
     * @param size Size of the memory block to allocate.
     * @param alignment Alignment of the memory block.
     *
     * @return Pointer to the allocated memory block or nullptr.
     */
    virtual void* Malloc(size_t size, u32 alignment) = 0;

    /**
     * @brief Deallocates memory from the heap.
     *
     * @param original Pointer to the original memory block.
     *
     * If used with nullptr, it does nothing and does not throw an error.
     */
    virtual void  Free(void* original) = 0;

    /**
     * @brief Reallocates memory from a pre-existing memory block.
     *
     * @param original Pointer to the original memory block.
     * @param size Size of the new allocated memory block.
     * @param alignment Alignment of the new allocated memory block.
     *
     * @return Pointer to the new allocated memory block.
     */
    virtual void* Realloc(void* original, size_t size, u32 alignment) = 0;

    /**
     * @brief Allocates memory on the heap and initializes all bits to zero.
     *
     * @param size Size of the memory block in bytes.
     * @param alignment Alignment of the memory block.
     *
     * @return Pointer to the newly allocated memory block.
     */
    virtual void* MallocZeroed(size_t size, u32 alignment) = 0;

    /**
     * @brief Tries to allocate memory on the heap (exits without a fatal error on failure).
     *
     * @param size Size of the allocated memory block.
     * @param alignment Alignment of the memory block.
     *
     * @return Pointer to the allocated memory block or nullptr.
     */
    virtual void* TryMalloc(size_t size, u32 alignment) = 0;

    /**
     * @brief Tries to deallocate memory from the heap (exits without a fatal error on failure).
     *
     * @param original Pointer to the original memory block.
     *
     * If used with nullptr, it does nothing and does not throw an error.
     */
    virtual void  TryFree(void* original) = 0;

    /**
     * @brief Tries to reallocate memory from a pre-existing memory block (exits without a fatal error on failure).
     *
     * @param original Pointer to the original memory block.
     * @param size Size of the new allocated memory block.
     * @param alignment Alignment of the new allocated memory block.
     *
     * @return Pointer to the new allocated memory block.
     */
    virtual void* TryRealloc(void* original, size_t size, u32 alignment) = 0;

    /**
     * @brief Tries to allocate memory on the heap, with all bits initialized to zero (exits without a fatal error on failure).
     *
     * @param size Size of the memory block in bytes.
     * @param alignment Alignment of the memory block.
     *
     * @return Pointer to the newly allocated memory block.
     */
    virtual void* TryMallocZeroed(size_t size, u32 alignment) = 0;

    /**
     * @brief Gets the size of an allocated memory block.
     *
     * @param original Pointer to the memory block.
     * @param size_out Pointer to a variable to store the size.
     *
     * @return True if successful, false if failed.
     */
    virtual bool GetAllocationSize(void* original, size_t* size_out) = 0;

    /**
     * @brief Get the descriptive name of the allocator.
     *
     * @return Descriptive name as a C-style string.
     */
    virtual const char* GetDescriptiveName() = 0;

    /**
     * @brief Memory trimming.
     *
     * @param trim_thread_caches Whether to trim thread-specific caches.
     */
    virtual void Trim(bool trim_thread_caches) = 0;

    /**
     * @brief Heap validation.
     *
     * @return True if the heap is valid, false otherwise.
     */
    virtual bool ValidateHeap() = 0;

protected:
    /**
     * @brief Hook for actions to run on Malloc initialization.
     */
    virtual void OnMallocInit() = 0;

    /**
     * @brief Hook for actions to run before a fork operation.
     */
    virtual void OnPreFork() = 0;

    /**
     * @brief Hook for actions to run after a fork operation.
     */
    virtual void OnPostFork() = 0;

private:
    /**
     * @brief Disable Copy/Move semantics.
     */
    MGE_DISABLE_COPY_AND_MOVE(FMalloc);
};

} // namespace MGE::Core::Memory
