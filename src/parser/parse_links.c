#include "lem_in.h"

void	create_matrix(int ***matrix, int n, int m)
{
	int i;

	i = 0;
	if (!(*matrix = malloc(sizeof(int*) * n)))
		print_error(E_MALLOC);
	while (i < n)
	{
		if (!((*matrix)[i] = malloc(sizeof(int) * m)))
			print_error(E_MALLOC);
		ft_bzero((*matrix)[i], m * sizeof(int));
		i++;
	}
}

int		valid_link(t_data *data)
{
	int i;
	int j;

	i = -1;
	while (++i < data->size_matrix)
	{
		j = -1;
		while (++j < data->size_matrix)
			if (data->matrix[i][j])
				return (1);
	}
	return (0);
}

char	*valid_linker(char *str)
{
	if (ft_strchr(str, '-'))
	{
		if (ft_strcmp(str, ft_strchr(str, '-'))
			&& ft_strchr(str, '-')[-1] != ' ')
			return (ft_strchr(str, '-'));
		while (!ft_strcmp(str, ft_strchr(str, '-')))
		{
			str = ft_strchr(str, '-') + 1;
			if (!ft_strchr(str, '-'))
				return (NULL);
			if (ft_strchr(str, '-') && ft_strcmp(str, ft_strchr(str, '-'))
				&& ft_strchr(str, '-')[-1] != ' ')
				return (ft_strchr(str, '-'));
		}
	}
	return (0);
}

int		parse_links(t_data *data, char *str, char *tmp)
{
	if (data->matrix == NULL)
		create_matrix(&(data->matrix), data->size_matrix, data->size_matrix);
	*(tmp++) = 0;
	if (search_room_name(data, tmp) == -1 || search_room_name(data, str) == -1)
		print_error(E_VAL_LINK);
	if (!strcmp(str, tmp))
		print_error(E_VAL_LINK);
	data->matrix[search_room_name(data, tmp)][search_room_name(data, str)] = 1;
	data->matrix[search_room_name(data, str)][search_room_name(data, tmp)] = 1;
	return (1);
}