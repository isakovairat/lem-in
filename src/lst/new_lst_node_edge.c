#include "graph.h"

t_lst_node_edges *new_lst_node_edge(int src, int dest, int weight) {
	t_lst_node_edges 	*new_node;

	new_node = (t_lst_node_edges*)ft_memalloc(sizeof(t_lst_node_edges));
	new_node->edge_weight = weight;
	new_node->vertex_start = src;
	new_node->vertex_end = dest;
	new_node->next = NULL;
	return (new_node);
}
