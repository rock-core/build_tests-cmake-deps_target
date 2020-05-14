Part of the Rock integration tests

This package is part of a set of three that tests
[base/cmake](https://github.com/rock-core/base-cmake) `DEPS_TARGET`
functionality. This package (`deps_target`) uses a CMake target exported by
[`deps_target_dependency`](https://github.com/rock-core/build_tests-cmake-deps_target_dependency).
`deps_target_use_pkgconfig` then tries to use the result as a pkg-config
dependency.


If it builds, it works
