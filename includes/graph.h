//
// Created by Harriet Barrett on 8/27/20.
//

#ifndef LEM_IN_GRAPH_H
# define LEM_IN_GRAPH_H

#include "lem_in.h"
//GRAPH
typedef struct				s_lst_node_edges
{
	int						vertex_start;
	int						vertex_end;
	int						edge_weight;
	struct s_lst_node_edges	*next;
}							t_lst_node_edges;

typedef struct	s_lst_edges
{
	int		vertex_name;
	struct s_lst_node_edges *head;
}				t_lst_edges;

typedef struct		s_graph
{
	int						v;
	struct s_lst_edges		*edges;
	int						*visited;
	int						*d;
}					t_graph;


t_graph			*create_graph(int v);
t_lst_node_edges *new_lst_node_edge(int src, int dest, int weight);
void			bzero_visited(t_graph *graph);
void			print_graph(t_graph *graph);
void			add_edge(t_graph *graph, int src, int dest);
void			bfs(int s, t_graph *graph);
void			dfs(t_graph *graph, int s);



#endif //LEM_IN_GRAPH_H
