#include "queue.h"

void en_queue(t_queue *queue, int k) {
	t_queue_node *temp;

	temp = new_node(k);
	if (queue->last == NULL)
	{
		queue->last = temp;
		queue->first = queue->last;
		return;
	}

	queue->last->next = temp;
	queue->last = temp;
}
