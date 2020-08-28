#include "lem_in.h"

t_graph *create_graph(int v) {
	t_graph	*graph;
	int		i;

	i = 0;
	graph = (t_graph*)ft_memalloc(sizeof(graph));
	graph->v = v;
	graph->visited = (int*)ft_memalloc(sizeof(int) * graph->v);
	graph->lst = (t_lst*)ft_memalloc(v * sizeof(t_lst));
	while (i < v)
	{
		graph->lst[i].head = NULL;
		i++;
	}
	return (graph);
}
