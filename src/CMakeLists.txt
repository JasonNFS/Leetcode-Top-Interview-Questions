macro(add_solution number)
    add_library(
            num${number}
            num${number}.cpp
    )
endmacro()

add_solution(238)
add_solution(54)