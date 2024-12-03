
# Create the test executable
add_executable(NodeTests adventureGameTests.cpp)

# Link the source code libraries to the test executable
target_link_libraries(NodeTests PRIVATE
    gtest_main           # GoogleTest main library
    GameMap              # Link to the GameMap library
    
)

