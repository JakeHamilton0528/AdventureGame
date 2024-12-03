add_library(GameMap STATIC Node.cpp Asset.cpp Combat.cpp Player.cpp Monster.cpp GameMap.cpp)

# PUBLIC include shares the location with anyone else that include this library
target_include_directories(GameMap PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")