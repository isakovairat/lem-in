#include "lem_in.h"

t_lst_node *new_lst_node(int dest) {
	t_lst_node	*new_node;

	new_node = (t_lst_node*)ft_memalloc(sizeof(t_lst_node));
	new_node->vertex_dest = dest;
	new_node->next = NULL;
	return (new_node);
}
