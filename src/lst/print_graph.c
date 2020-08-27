#include "lem_in.h"

//TODO
#include <stdio.h>

void print_graph(t_graph *graph) {
	int			v;
	t_lst_node	*p_crawl;

	v = 0;
	while (v < graph->v)
	{
		p_crawl = graph->lst[v].head;
		printf("\n Adjacency list of vertex %d\n head ", v);
		while (p_crawl)
		{
			printf("-> %d", p_crawl->vertex_dest);
			p_crawl = p_crawl->next;
		}
		printf("\n");
		v++;
	}
}
