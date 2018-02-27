
#include "ft_list.h"

int	ft_list_size(t_list **list)
{
	t_list 	*hold;
	int		index;
	
	hold = *list;
	while (hold != 0)
	{
		index++;
		printf("%i\n", hold);
		hold = hold->next;
	}
	return (index);
}
