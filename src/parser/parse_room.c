#include "lem_in.h"

void	start_or_end(char *str, t_data *data, const int *i)
{
	if (!ft_strcmp(str, "##start"))
	{
		if (data->start != -1 || data->end == *i)
			print_error(E_START);
		data->start = *i;
	}
	if (!ft_strcmp(str, "##end"))
	{
		if (data->end != -1 || data->start == *i)
			print_error(E_END);
		data->end = *i;
	}
}

void	parser_room(t_data *data, char *str, int index)
{
	t_room		new_room;
	char		*temp;
	char		*hel_null;
	char		*strt;

	strt = ft_strdup(str);
	if (!(temp = ft_strchr(strt, ' ')) || strt[0] == 'L' || data->matrix)
		print_error(E_ROOM);
	*temp++ = 0;
	new_room.name = ft_strdup(strt);
	if (!(hel_null = ft_strchr(temp, ' ')))
		print_error(E_NO_VALID);
	*hel_null++ = 0;
	new_room.x = ft_get_ant_numbs(temp);
	temp = hel_null;
	new_room.y = ft_get_ant_numbs(temp);
	if (search_room_name(data, strt) != -1)
		print_error(E_ROOM);
	push_front(data, index, &new_room);
	ft_strdel(&strt);
}