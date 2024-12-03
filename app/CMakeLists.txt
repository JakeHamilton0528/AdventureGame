# set up executable
add_executable(AdventureGame2 main.cpp)

# add library that was add in the CMakeLists in the src dir to the executable
target_link_libraries(AdventureGame2 PRIVATE GameMap)
target_include_directories(AdventureGame2 PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")