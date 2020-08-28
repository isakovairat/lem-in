#ifndef LEM_IN_QUEUE_H
# define LEM_IN_QUEUE_H
/* CREATE DEFINE ??????? TODO ?????*/
# include "lem_in.h"
typedef struct			s_queue_node
{
	int					key;
	struct s_queue_node	*next;
}						t_queue_node;

typedef struct			s_queue
{
	t_queue_node	*first;
	t_queue_node	*last;
}						t_queue;

t_queue			*create_queue();
t_queue_node	*new_node(int k);
int				de_queue(t_queue *queue);
void			en_queue(t_queue *queue, int k);
size_t			get_queue_size(t_queue *queue);
void			delete_queue(t_queue **p_queue);
int				is_queue_empty(t_queue *queue);

#endif
