#include "lem_in.h"



void add_edge(t_graph *graph, int src, int dest) {
	t_lst_node	*new_node;

	new_node = new_lst_node(dest);
	new_node->next = graph->lst[src].head;
	graph->lst[src].head = new_node;
	new_node = new_lst_node(src);
	new_node->next = graph->lst[dest].head;
	graph->lst[dest].head = new_node;
}
