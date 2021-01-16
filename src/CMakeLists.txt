set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE  ON)

include_directories(include)

add_library(rangechecker OBJECT Rangechecker.cpp)
target_include_directories(rangechecker INTERFACE include)