include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
enable_testing()
include(GoogleTest)

macro(add_problem num)
    add_executable(
        test_num${num}
        test_num${num}.cpp
    )
    target_link_libraries(
        test_num${num}
        gtest_main
        #        num${num}
    )
    gtest_discover_tests(test_num${num})
endmacro()

include(GoogleTest)
include_directories(${PROJECT_SOURCE_DIR}/src)

add_problem(238)
