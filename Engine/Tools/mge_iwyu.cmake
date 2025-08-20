#----------------------------------------------------------------------------------------------------------------------------------------------------------------------
# .___  ___. ____    ____  _______.___________. __    ______      _______      ___      .___  ___.  _______     _______ .__   __.   _______  __  .__   __.  _______ 
# |   \/   | \   \  /   / /       |           ||  |  /      |    /  _____|    /   \     |   \/   | |   ____|   |   ____||  \ |  |  /  _____||  | |  \ |  | |   ____|
# |  \  /  |  \   \/   / |   (----`---|  |----`|  | |  ,----'   |  |  __     /  ^  \    |  \  /  | |  |__      |  |__   |   \|  | |  |  __  |  | |   \|  | |  |__   
# |  |\/|  |   \_    _/   \   \       |  |     |  | |  |        |  | |_ |   /  /_\  \   |  |\/|  | |   __|     |   __|  |  . `  | |  | |_ | |  | |  . `  | |   __|  
# |  |  |  |     |  | .----)   |      |  |     |  | |  `----.   |  |__| |  /  _____  \  |  |  |  | |  |____    |  |____ |  |\   | |  |__| | |  | |  |\   | |  |____ 
# |__|  |__|     |__| |_______/       |__|     |__|  \______|    \______| /__/     \__\ |__|  |__| |_______|   |_______||__| \__|  \______| |__| |__| \__| |_______|
#
# Mystic Game Engine (MGE) by Mystic Devloper :)
#----------------------------------------------------------------------------------------------------------------------------------------------------------------------

# Info: Build Tool for IWYU (Include What You Use) Module
# Path: [ROOT]/Engine/Tools/mge_iwyu.cmake

# If MGE_ENABLE_IWYU option is not set, then don't run this
if(NOT MGE_ENABLE_IWYU)
    return
endif()

# Find IWYU program
find_program(MGE_IWYU_EXE NAMES include-what-you-use iwyu)

# if IWYU was found configure it
if(MGE_IWYU_EXE)
    if(MGE_IWYU_ARGS)
        set(CMAKE_CXX_INCLUDE_WHAT_YOU_USE "${MGE_IWYU_EXE};${MGE_IWYU_ARGS}" CACHE INTERNAL "" FORCE)
        message(STATUS "IWYU enabled with arguments: ${MGE_IWYU_ARGS}")
    else()
        set(CMAKE_CXX_INCLUDE_WHAT_YOU_USE "${MGE_IWYU_EXE}" CACHE INTERNAL "" FORCE)
        message(STATUS "IWYU enabled with no extra arguments")
    endif()
else()
    message(FATAL_ERROR "Include-what-you-use not found. Configure your IWYU or Disable MGE_ENABLE_IWYU.")
endif()
