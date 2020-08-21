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
        src/main.c src/parser/parser.c src/error_handler.c src/list.c src/parser/parse_links.c src/parser/parse_room.c src/utils/ft_get_ant_numbs.c src/utils/print_str.c)

target_link_libraries(lem_in
        "ft"
        )