
#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *list)
{
	t_list 	*current;
	t_list 	*next;
	
	current = list;
	while (next->next)
	{
		next = current->next;
		free(current);
	}
}
