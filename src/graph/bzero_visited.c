#include "graph.h"

void	bzero_visited(t_graph *graph)
{
	int		i;

	i = 0;
	while (i < graph->v)
	{
		graph->visited[i] = 0;
		i++;
	}
}
