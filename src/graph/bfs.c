#include "lem_in.h"
#include <limits.h>

//void	dijkstra(t_graph *graph, int s)
//{
//	int		previous[graph->v];
//	int		i;
//	t_queue	*queue;
//
//	i = 0;
//	queue = create_queue();
//	while (i < graph->v)
//	{
//		if (graph->edges[i].vertex_name != s)
//		en_queue(queue, graph->edges[i].vertex_name);
//	}
//	ft_memset(graph->visited, 0, graph->v * sizeof(int));
//	ft_memset(graph->d, 255, graph->v * sizeof(int));
//	graph->d[s] = 0;
//	graph->visited[s] = 1;
//	while (!is_queue_empty(queue))
//	{
//
//	}
//
//
//}

void mark_bfs(int s, t_graph *graph) {
	int				current_vertex;
	t_queue			*queue;
	struct s_lst_node_edges *temp;
	int vertex;

	bzero_visited(graph);
	queue = create_queue();
	graph->visited[s] = 1;
	graph->d[s] = 0;
	en_queue(queue, s);
	while (!is_queue_empty(queue))
	{
		current_vertex = de_queue(queue);
		printf("Visited %d\n", current_vertex);
		temp = graph->edges[current_vertex].head;
		while (temp)
		{
			vertex = temp->vertex_end;
			if (graph->visited[vertex] == 0) {
				graph->visited[vertex] = 1;
				en_queue(queue, vertex);
			}
			temp = temp->next;
		}
	}
	delete_queue(&queue);
}

void bfs(int s, t_graph *graph) {
	int				current_vertex;
	t_queue			*queue;
	struct s_lst_node_edges *temp;
	int vertex;

	bzero_visited(graph);
	queue = create_queue();
	graph->visited[s] = 1;
	en_queue(queue, s);
	while (!is_queue_empty(queue))
	{
		current_vertex = de_queue(queue);
		printf("Visited %d\n", current_vertex);
		temp = graph->edges[current_vertex].head;
		while (temp)
		{
			vertex = temp->vertex_end;
			if (graph->visited[vertex] == 0) {
				graph->visited[vertex] = 1;
				en_queue(queue, vertex);
			}
			temp = temp->next;
		}
	}
	delete_queue(&queue);
}
