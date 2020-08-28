#include "queue.h"

size_t get_queue_size(t_queue *queue) {
	size_t	size;
	t_queue_node	*temp;

	size = 0;
	if (queue == NULL)
		return (0);
	if (queue->last == queue->first)
		return (1);
	temp = queue->first;
	while (temp != queue->last)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}
