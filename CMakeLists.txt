cmake_minimum_required(VERSION 3.15)
project(lem_in)

add_compile_options(-Wall -Wextra -Werror -g)
set(CMAKE_C_STANDARD 99)

include_directories(
        includes
        libft/
)

link_directories(lem_in
        libft)

add_executable(lem_in
        src/main.c)

target_link_libraries(lem_in
        "ft"
        )