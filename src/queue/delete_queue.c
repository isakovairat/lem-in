#include "lem_in.h"

void delete_queue(t_queue **p_queue) {
	if (p_queue && *p_queue)
	{
		while ((*p_queue)->front != NULL)
			de_queue(*p_queue);
		de_queue(*p_queue);
		free(*p_queue);
		*p_queue = 0;
	}
}
