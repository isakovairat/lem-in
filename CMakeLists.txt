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
        src/main.c
        src/error_handler.c
        src/list.c
        src/parser/parser.c
        src/parser/parse_links.c
        src/parser/parse_room.c
        src/utils/ft_get_ant_numbs.c
        src/utils/print_str.c src/lst/new_lst_node.c src/lst/create_graph.c src/lst/add_edge.c src/lst/print_graph.c src/lst/bfs.c src/queue/create_queue.c includes/queue.h src/queue/new_node.c src/queue/en_queue.c src/queue/de_queue.c src/queue/get_queue_size.c src/queue/delete_queue.c src/queue/is_queue_empty.c includes/graph.h src/lst/bzero_visited.c src/lst/dfs.c)

target_link_libraries(lem_in
        "ft"
        )