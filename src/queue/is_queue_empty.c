#include "queue.h"

int is_queue_empty(t_queue *queue) {
	if (!queue)
		return (0);
	if (queue->front == NULL)
		return (1);
	return (0);
}
