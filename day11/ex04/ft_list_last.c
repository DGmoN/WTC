
#include "ft_list.h"

t_list	*ft_list_last(t_list *list)
{
	t_list *current;
	
	current = list;
	while (current->next)
		current = current->next;
	return (list);
}
