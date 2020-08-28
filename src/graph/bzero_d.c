#include "graph.h"

void	bzero_d(t_graph *graph)
{
	int		i;

	i = 0;
	while (i < graph->v)
	{
		graph->d[i] = 0;
		i++;
	}
}

