
#include "ft_list.h"

t_list	*ft_create_elem(void *data);

void	ft_list_push_front(t_list **list, void *data)
{
	t_list * temp;
	t_list * str;	
	
	temp = ft_create_elem(data);
	str = *list;
	if (temp)
	{
		temp->next = str;
	}
}
