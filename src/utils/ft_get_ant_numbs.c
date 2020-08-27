// TODO Поменять INT_MAX и INT_MIN
#include <limits.h>
#include "lem_in.h"

int		ft_get_ant_numbs(const char *str)
{
	__int128	res;
	int			negative;

	negative = 1;
	res = 0;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		++str;
	if (!*str)
		print_error(E_INT);
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	if (*str || !((res *= negative) >= INT_MIN && res <= INT_MAX))
		print_error(E_INT);
	return ((int)res);
}