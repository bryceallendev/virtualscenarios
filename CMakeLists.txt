# @file CMakeLists.txt
# 
# CMake files for VirtualScenario

# Can be run by any version of CMake >= this
cmake_minimum_required(VERSION 3.19)

# project info
project(VirtualScenarios)

# C++17 standard
set(CMAKE_CXX_STANDARD 17)

# force release debug since used for demonstration
set(CMAKE_BUILD_TYPE Debug)

# ScenarioA application
add_library(A OBJECT A.cpp AUtilities.cpp)
add_executable(ScenarioA ScenarioA.cpp $<TARGET_OBJECTS:A>)

# ScenarioB application
add_library(B OBJECT B.cpp BUtilities.cpp)
add_executable(ScenarioB ScenarioB.cpp $<TARGET_OBJECTS:A> $<TARGET_OBJECTS:B>)

# ScenarioC application
add_library(C OBJECT C.cpp CUtilities.cpp)
add_executable(ScenarioC ScenarioC.cpp $<TARGET_OBJECTS:A> $<TARGET_OBJECTS:B> $<TARGET_OBJECTS:C>)

# run all scenarios
add_custom_target(runall
        COMMENT "Run all scenarios"
        COMMAND ./ScenarioA
        COMMAND ./ScenarioB
        COMMAND ./ScenarioC
        DEPENDS ScenarioA ScenarioB ScenarioC
        USES_TERMINAL
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

# run ScenarioA
add_custom_target(runa
        COMMENT "Run ScenarioA"
        COMMAND ./ScenarioA
        DEPENDS ScenarioA
        USES_TERMINAL
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

# run ScenarioB
add_custom_target(runb
        COMMENT "Run ScenarioB"
        COMMAND ./ScenarioB
        DEPENDS ScenarioB
        USES_TERMINAL
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

# run ScenarioC
add_custom_target(runc
        COMMENT "Run ScenarioC"
        COMMAND ./ScenarioC
        DEPENDS ScenarioC
        USES_TERMINAL
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)
