#include "lem_in.h"

void	print_str(char **str)
{
	if (*str)
	{
		ft_putstr(*str);
		ft_putstr("\n");
		ft_strdel(str);
	}
	*str = NULL;
}