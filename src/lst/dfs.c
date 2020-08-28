#include "lem_in.h"

static void dfs_recursive(t_graph *graph, int vertex) {
	t_lst_node *lst;
	t_lst_node *temp;

	lst = graph->lst[vertex].head;
	temp = lst;
	graph->visited[vertex] = 1;
	printf("Visited %d \n", vertex);
	while (temp != NULL)
	{
		int connected_vertex = temp->vertex_dest;
		if (graph->visited[connected_vertex] == 0) {
			dfs_recursive(graph, connected_vertex);
		}
		temp = temp->next;
	}
}


void dfs(t_graph *graph, int s) {
	bzero_visited(graph);
	dfs_recursive(graph, s);
}
