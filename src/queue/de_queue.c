#include "queue.h"

void de_queue(t_queue *queue) {
	t_queue_node *temp;

	if (queue->front == NULL) {
		return;
	}
	temp = queue->front;
	queue->front = queue->front->next;
	if (queue->front == NULL)
		queue->rear = NULL;
	free(temp);
}
