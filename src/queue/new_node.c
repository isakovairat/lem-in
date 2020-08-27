#include "queue.h"

t_queue_node *new_node(int k) {
	t_queue_node *temp;

	temp = (t_queue_node*)ft_memalloc(sizeof(t_queue_node));
	temp->key = k;
	temp->next = NULL;
	return (temp);
}
