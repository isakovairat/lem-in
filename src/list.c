#include "lem_in.h"

void			my_copy(t_room *in, t_room *out)
{
	in->name = out->name;
	in->x = out->x;
	in->y = out->y;
}

t_lem_list		*lst_create(int index, t_room *room)
{
	t_lem_list	*new;

	if (!(new = (t_lem_list*)malloc(sizeof(t_lem_list))))
		print_error(E_MALLOC);
	new->index = index;
	new->next = NULL;
	my_copy(&new->room, room);
	return (new);
}

void			push_front(t_data *data, int index, t_room *room)
{
	t_lem_list *new;

	new = lst_create(index, room);
	new->next = data->rooms;
	data->rooms = new;
}

int				search_room_name(t_data *data, char *str)
{
	t_lem_list *shift;

	shift = data->rooms;
	while (shift && ft_strcmp(shift->room.name, str))
		shift = shift->next;
	if (shift)
		return (shift->index);
	else
		return (-1);
}

char			*search_room_index(t_data *data, int index)
{
	t_lem_list *shift;

	shift = data->rooms;
	while (shift && shift->index != index)
		shift = shift->next;
	return (shift->room.name);
}