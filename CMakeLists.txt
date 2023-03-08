CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

ADD_SUBDIRECTORY(test/googletest)



ADD_EXECUTABLE(runAllTests
    src/Book.cpp
    src/Media.cpp
    src/Movie.cpp
    src/Show.cpp
    src/StackMaker.cpp
    src/testMedia.cpp
    test/runAllTests.cpp
)

TARGET_LINK_LIBRARIES(runAllTests gtest)
TARGET_COMPILE_DEFINITIONS(runAllTests PRIVATE gtest_disable_pthreads=ON)