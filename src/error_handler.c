#include "libft.h"

void	print_error(int id)
{
	write(2, "ERROR\n", 6);
	exit(id);
}