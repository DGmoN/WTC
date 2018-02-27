
#include "ft_list.h"

void	ft_list_reverse(t_list *list)
{
	t_list *current;
	t_list *previous;
	t_list *_next;
	
	current = list;
	previous = 0;
	while (current->next)
	{
		if(current->next == current)
		{
			current->next = previous;
			return;
		}
		_next = current->next;
		
		printf("Prevous: %i\n", previous);
		printf("Current: %i\n", current);
		printf("Next: %i\n\n", _next);
		
		current->next = previous;
		previous = current;
		current = _next;
	}
}
