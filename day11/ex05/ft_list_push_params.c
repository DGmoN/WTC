
#include "ft_list.h"

t_list	*ft_create_elem(void *data);

t_list	*ft_list_push_params(int ac, char **av)
{
	int index;
	t_list *current;
	t_list *holder;
	
	index = 0;
	current = 0;
	while (index < ac)
	{
		holder = 0;
		holder = ft_create_elem(av[index]);
		if (current)
			current = holder;
		else
			holder->next = current;
		current = holder;
		index++;
	}
	return (current);
}
