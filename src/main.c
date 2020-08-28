#include "lem_in.h"

void 	init_data(t_data *data)
{

	data->end = -1;
	data->start = -1;
	data->size_matrix = 0;
	data->numb_ants = 0;
	data->matrix = NULL;
	data->rooms = NULL;
}

void		ft_print_matrix(t_data data)
{
	int i = 0;
	int j = 0;
	while(i < data.size_matrix)
	{
		j = 0;
		while (j < data.size_matrix)
		{
			ft_putnbr(data.matrix[i][j]);
			ft_putstr(" ");
			j++;
		}
		ft_putstr("\n");
		i++;
	}
}


//int main()
//{
//	t_queue *q = create_queue();
//	en_queue(q, 10);
//	en_queue(q, 20);
//	de_queue(q);
//	de_queue(q);
//	en_queue(q, 30);
//	en_queue(q, 40);
//	en_queue(q, 50);
//	de_queue(q);
//	printf("Queue Front : %d \n", q->front->key);
//	printf("Queue Rear : %d", q->rear->key);
//	return 0;
//}
void bfs_edges(int s, t_graph *graph);

int main(void) {
//	t_data data;

//	init_data(&data);
//	parser(&data);
//	ft_putnbr(data.start);
//	ft_putstr("\n");
//	ft_putnbr(data.end);
//	ft_putstr("\n");
//	ft_putnbr(data.size_matrix);
//	ft_putstr("\n");
//	ft_putnbr(data.numb_ants);
//	ft_putstr("\n");
//	ft_print_matrix(data);

	int v = 5;
	t_graph *graph = create_graph(v);
	add_edge(graph, 0, 1);
	add_edge(graph, 0, 4);
	add_edge(graph, 1, 2);
	add_edge(graph, 1, 3);
	add_edge(graph, 1, 4);
	add_edge(graph, 2, 3);
	add_edge(graph, 3, 4);

//	bfs(0, graph);
//	printf("\n\n\n");
	dfs(graph, 0);
//	free(graph->visited);
	// print the adjacency list representation of the above graph
//	print_graph_edges(graph);
//	bfs_edges(0, graph);
	return (0);

}