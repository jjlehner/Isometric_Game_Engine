add_library(engine STATIC
        engine/scene/base_objects/Grid.cpp

        engine/window/Window.cpp
        engine/scene/base_objects/Game_Object_Interface.cpp
        engine/graphics/Interfaces.cpp
        engine/objects/Man/Man.cpp engine/objects/Man/Man.hpp engine/graphics/Utility.h)
target_include_directories(engine PUBLIC engine)
add_executable(main main.cpp)

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_IMAGE_INCLUDE_DIRS})
target_link_libraries(main PRIVATE engine ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES})

