#include "ex00/ft_list.h"

t_list  *ft_create_elem(void *data);
void    ft_list_push_back(t_list **list, void *data);
void	ft_list_push_front(t_list **list, void *data);
int	ft_list_size(t_list *list);
t_list	*ft_list_push_params(int ac, char **av);
void	ft_list_reverse(t_list **list);
void ft_list_foreach(t_list *begin_list, void (*f)(void *));

void print_t(void *data);

int main(int c, char **a)
{	
	t_list *list = ft_list_push_params(c, a);
	t_list *current = list;
	
	printf("Link list is so long: %i\n", ft_list_size(&current));

	ft_list_foreach(list, &print_t);

	ft_list_reverse(&list);
	current = list;
	printf("Link list is so long: %i\n", ft_list_size(&list));
	while (current != 0)
	{
		printf("%s\n", (char *)current->data);
		current = current->next;
	}


}

void print_t(void *data)
{
	printf("%s\n", (char *)data);
}
