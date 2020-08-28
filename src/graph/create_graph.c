#include "lem_in.h"

t_graph *create_graph(int v) {
	t_graph	*graph;
	int		i;

	i = 0;
	graph = (t_graph*)ft_memalloc(sizeof(graph));
	graph->v = v;
	graph->visited = (int*)ft_memalloc(sizeof(int) * graph->v);
	graph->d = (int*)ft_memalloc(sizeof(int) * graph->v);
	graph->edges = (t_lst_edges*)ft_memalloc(v * sizeof(t_lst_node_edges));
	while (i < v)
	{
		graph->edges[i].head = NULL;
		i++;
	}
	return (graph);
}
