find_package(deps_target_dependency REQUIRED)

rock_library(deps_target
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp
    DEPS_TARGET deps_target_dependency::deps_target_dependency
)

rock_executable(deps_target_bin Main.cpp
    DEPS deps_target)
