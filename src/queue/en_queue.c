#include "queue.h"

void en_queue(t_queue *queue, int k) {
	t_queue_node *temp;

	temp = new_node(k);
	if (queue->rear == NULL)
	{
		queue->rear = temp;
		queue->front = queue->rear;
		return;
	}

	queue->rear->next = temp;
	queue->rear = temp;
}
