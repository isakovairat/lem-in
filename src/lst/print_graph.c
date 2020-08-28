#include "lem_in.h"

//TODO
#include <stdio.h>

void print_graph(t_graph *graph) {
	int			v;
	t_lst_node_edges	*p_crawl;

	v = 0;
	while (v < graph->v)
	{
		p_crawl = graph->edges[v].head;
		printf("\n Adjacency list of vertex %d\n head ", v);
		while (p_crawl)
		{
			printf("-> start %d end %d weight %d", p_crawl->vertex_start, p_crawl->vertex_end, p_crawl->edge_weight);
			p_crawl = p_crawl->next;
		}
		printf("\n");
		v++;
	}
}
