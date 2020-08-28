#include "lem_in.h"

void add_edge(t_graph *graph, int src, int dest) {
	t_lst_node_edges	*new_node_edge;

	new_node_edge = new_lst_node_edge(src, dest, 1);
	new_node_edge->next = graph->edges[src].head;
	graph->edges[src].head = new_node_edge;
	new_node_edge = new_lst_node_edge(dest, src, 1);
	new_node_edge->next = graph->edges[dest].head;
	graph->edges[dest].head = new_node_edge;
}
