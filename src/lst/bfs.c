#include "lem_in.h"

static void bzero_visited(int *visited, int v)
{
	int		i;

	i = 0;
	while (i < v)
	{
		visited[i] = 0;
		i++;
	}
}

void bfs(int s, t_graph *graph) {
	int				current_vertex;
	int				visited[graph->v];
	t_queue			*queue;
	struct s_lst_node *temp;

	bzero_visited(visited, graph->v);
	queue = create_queue();
	visited[s] = 1;
	en_queue(queue, s);
	while (!is_queue_empty(queue))
	{
		current_vertex = queue->front->key;
		de_queue(queue);
		printf("Visited %d\n", current_vertex);
		temp = graph->lst[current_vertex].head;
		while (temp)
		{
			int vertex = temp->vertex_dest;
			if (visited[vertex] == 0) {
				visited[vertex] = 1;
				en_queue(queue, vertex);
			}
			temp = temp->next;
		}
	}
	delete_queue(&queue);
}
