#include "ex00/ft_list.h"

t_list  *ft_create_elem(void *data);
//void    ft_list_push_back(t_list **list, void *data);

int main()
{
	char *data = "data";
	t_list *list = ft_create_elem(data);
	t_list *tt = ft_create_elem("FUCK");
	list->next = tt;
//	ft_list_push_back(&list->next,"SHIT!!");
	int index = 0;
	t_list *current = list;
	while (current != 0)
	{
		printf("%s\n", (char *)current->data);
		current = current->next;
	}


}
