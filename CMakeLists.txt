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

# Set minimum cmake version required for build, 3.21 in MGE
cmake_minimum_required(VERSION 3.21)

# Read the version from VERSION file
file(READ "${CMAKE_SOURCE_DIR}/VERSION" MGE_VERSION)

# Trim any leading/trailing whitespaces
string(STRIP ${MGE_VERSION} MGE_VERSION)

# Sets the Project
project(Mystic-Game-Engine VERSION ${MGE_VERSION})

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Engine Source Code
add_subdirectory(Engine)

# Some Games Built Upon Engine
add_subdirectory(Projects)
