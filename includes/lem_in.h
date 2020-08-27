#ifndef LEM_IN
# define LEM_IN

#include <stdio.h>
#include "stdlib.h"
#include "libft.h"

#include "graph.h"
#include "queue.h"

# define E_MALLOC 1
# define E_NO_VALID 2
# define E_START 3
# define E_END 4
# define E_VAL_LINK 5
# define E_INT 6
# define E_NO_LINK 7
# define E_PATH 8
# define E_ANT 9
# define E_ROOM 10

/*
 *
 *
 * DEPRECATED
 *
 * */
typedef struct	s_room
{
	char	*name;
	int		x;
	int		y;
}				t_room;

typedef struct	s_lem_list
{
	t_room				room;
	int					index;
	struct s_lem_list	*next;
}				t_lem_list;

typedef struct	s_path_ant
{
	int		size_of_road;
	int		size_of_ant;
}				t_path_ant;

typedef struct	s_path
{
	int				numb_path;
	int				**matrix_path;
	int				size_of_step;
	t_path_ant		*ant;
}				t_path;

typedef struct	s_data {
	t_lem_list			*rooms;
	int					**matrix;
	int					size_matrix;
	struct s_top_djks	*dist;
	int					numb_ants;
	int					start;
	int					end;
	t_path				path_first;
	t_path				path_second;
}				t_data;

typedef struct	s_top_djks
{
	int		distance;
	int		index_parent;
}				t_top_djks;

typedef	struct	s_pos_index_ant
{
	int index;
	int num_road;
}				t_pos_index_ant;



//parser
void		parser(t_data *data);
void		print_error(int id);

//parse-links
char	*valid_linker(char *str);
int		valid_link(t_data *data);
int		parse_links(t_data *data, char *str, char *tmp);

//parse-rooms
void	start_or_end(char *str, t_data *data, const int *i);
void	parser_room(t_data *data, char *str, int index);

//utils
void	print_str(char **str);
int		ft_get_ant_numbs(const char *str);

//list functions
void			my_copy(t_room *in, t_room *out);
t_lem_list		*lst_create(int index, t_room *room);
void			push_front(t_data *data, int index, t_room *room);
int				search_room_name(t_data *data, char *str);
char			*search_room_index(t_data *data, int index);



#endif
