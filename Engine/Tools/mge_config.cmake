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

# Info: All configuration and options of MGE build
# Path: [ROOT]/Engine/Tools/mge_config.cmake

option(MGE_SHARED_LIBS    "Option to generate dynamic shared library (i.e., .so on Linux and .dll on Windows.)" ON)
option(MGE_STATIC_LIBS    "Option to generate static library (i.e., .a on Linux and .lib on Windows.)"          ON)
option(MGE_ENABLE_IWYU    "Option to enable Include-What-You-Use (IWYU) Tool."                                  OFF)
option(MGE_INSTALL        "Option to install Mystic Game Engine (MGE) system-wide."                             OFF)
option(MGE_BUILD_EXAMPLES "Option to enable build examples (i.e., Games in [ROOT]/Projects folder.)"            ON)
option(MGE_BUILD_TESTS    "Option to enable build tests (i.e., Tests in [ROOT]/Engine/Tests folder.)"           ON)
