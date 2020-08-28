#include "queue.h"

int		de_queue(t_queue *queue) {
	t_queue_node *temp;
	int key;

		if (queue->front == NULL) {
		return -1;
	}
	temp = queue->front;
	key = temp->key;
	queue->front = queue->front->next;
	if (queue->front == NULL)
		queue->rear = NULL;
	free(temp);
	return key;
}
