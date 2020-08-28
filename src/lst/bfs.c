#include "lem_in.h"

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
		current_vertex = queue->front->key;
		de_queue(queue);
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
