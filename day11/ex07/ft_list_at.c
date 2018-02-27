
#include "ft_list.h"

t_list	*ft_list_at(t_list *list, unsigned int nbr)
{
	t_list 	*current;
	int		index;
	
	index = 0;
	current = list;
	while (index < nbr)
	{
		if(!current->next)
			return (0);
		current = current->next;
		index++;
	}
	return (list);
}
