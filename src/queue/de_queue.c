#include "queue.h"

int		de_queue(t_queue *queue) {
	t_queue_node *temp;
	int key;

		if (queue->first == NULL) {
		return -1;
	}
	temp = queue->first;
	key = temp->key;
	queue->first = queue->first->next;
	if (queue->first == NULL)
		queue->last = NULL;
	free(temp);
	return key;
}
