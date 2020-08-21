#include "lem_in.h"



void		valid(char *line, t_data *data, int *i)
{
	char *tmp;
	char *strt;

	strt = ft_strdup(line);
	if (!ft_strlen(strt))
		print_error(E_NO_VALID);
	start_or_end(strt, data, i);
	if ((tmp = valid_linker(strt)))
	{
		if (!data->matrix)
			data->size_matrix = *i;
		parse_links(data, strt, tmp);
	}
	else if (strt[0] != '#')
	{
		parser_room(data, strt, *i);
		(*i)++;
	}
	else if ((*i == data->start || *i == data->end) && line &&
			 ft_strcmp(line, "##end") && ft_strcmp(line, "##start"))
		print_error(E_END);
	ft_strdel(&strt);
}

void		parser(t_data *data)
{
	char	*line;
	int		i;ft_putstr("\n");

	i = 0;
	line = NULL;
	while (get_next_line(0, &line) && line[0] == '#' &&
		   ft_strcmp(line, "##start") && ft_strcmp(line, "##end"))
		if (!(line[0]=='#' && line[1] != '#'))
			print_str(&line);
	if (!line || (data->numb_ants = ft_get_ant_numbs(line)) <= 0)
		print_error(E_ANT);
	print_str(&line);
	while (get_next_line(0, &line))
	{
		if (!(line[0]=='#' && line[1] != '#')) {
			valid(line, data, &i);
			print_str(&line);
		}
		free(line);
	}
	if (!valid_link(data))
		return (print_error(E_NO_LINK));
	write(1, "\n", 1);
	if (data->start == -1 || data->end == -1)
		print_error(E_NO_VALID);
}