#include "queue.h"

size_t get_queue_size(t_queue *queue) {
	size_t	size;
	t_queue_node	*temp;

	size = 0;
	if (queue == NULL)
		return (0);
	if (queue->rear == queue->front)
		return (1);
	temp = queue->front;
	while (temp != queue->rear)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}
