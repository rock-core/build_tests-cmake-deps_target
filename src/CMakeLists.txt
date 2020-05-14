rock_library(deps_target
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(deps_target_bin Main.cpp
    DEPS deps_target)

