#include "lem_in.h"

void 	init_data(t_data *data)
{

	data->end = -1;
	data->start = -1;
	data->size_matrix = 0;
	data->numb_ants = 0;
	data->matrix = NULL;
	data->rooms = NULL;
}

void		ft_print_matrix(t_data data)
{
	int i = 0;
	int j = 0;
	while(i < data.size_matrix)
	{
		j = 0;
		while (j < data.size_matrix)
		{
			ft_putnbr(data.matrix[i][j]);
			ft_putstr(" ");
			j++;
		}
		ft_putstr("\n");
		i++;
	}
}

int main(void) {
	t_data data;

	init_data(&data);
	parser(&data);
	ft_putnbr(data.start);
	ft_putstr("\n");
	ft_putnbr(data.end);
	ft_putstr("\n");
	ft_putnbr(data.size_matrix);
	ft_putstr("\n");
	ft_putnbr(data.numb_ants);
	ft_putstr("\n");
	ft_print_matrix(data);
	return (0);

}