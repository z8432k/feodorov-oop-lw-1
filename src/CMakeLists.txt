set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE  ON)


add_executable(lab1 lab1.cc)

target_include_directories(lab1
        PRIVATE
        include)