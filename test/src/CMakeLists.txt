#include_directories (${TEST_SOURCE_DIR}/src)
file(GLOB SOURCE_FILES *.cpp)
file(GLOB HEADER_FILES *.hpp)

add_executable(Test ${SOURCE_FILES})# main.cpp test.cpp)
#add_executable (Test test.cpp)

add_test(TestHelloWorld CheckX)
