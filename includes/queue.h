#ifndef LEM_IN_QUEUE_H
# define LEM_IN_QUEUE_H
/* CREATE DEFINE ??????? TODO ?????*/
# include "libft.h"
typedef struct			s_queue_node
{
	int					key;
	struct s_queue_node	*next;
}						t_queue_node;

typedef struct			s_queue
{
	t_queue_node	*front;
	t_queue_node	*rear;
}						t_queue;

t_queue			*create_queue();
t_queue_node	*new_node(int k);
void			de_queue(t_queue *queue);
void			en_queue(t_queue *queue, int k);
size_t			get_queue_size(t_queue *queue);
void			delete_queue(t_queue **p_queue);
int				is_queue_empty(t_queue *queue);

#endif