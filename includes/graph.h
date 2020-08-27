//
// Created by Harriet Barrett on 8/27/20.
//

#ifndef LEM_IN_GRAPH_H
#define LEM_IN_GRAPH_H

//GRAPH
typedef struct	s_lst_node
{
	int vertex_dest;
	struct s_lst_node *next;
}
		t_lst_node;

typedef struct	s_lst
{
	int vertex_name;
	struct s_lst_node *head;
}				t_lst;

typedef struct		s_graph
{
	int				v;
	struct s_lst	*lst;
}					t_graph;

t_lst_node		*new_lst_node(int dest);
t_graph			*create_graph(int v);
void			print_graph(t_graph *graph);
void			add_edge(t_graph *graph, int src, int dest);
void			bfs(int s, t_graph *graph);

#endif //LEM_IN_GRAPH_H
