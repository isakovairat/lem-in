#include "queue.h"

t_queue *create_queue() {
	t_queue	*queue;

	queue = (t_queue*)ft_memalloc(sizeof(t_queue));
	queue->last = NULL;
	queue->first = queue->last;
	return (queue);
}
