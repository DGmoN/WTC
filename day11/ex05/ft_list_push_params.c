/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 09:56:02 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/28 12:41:10 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		index;
	t_list	*current;
	t_list	*previos;

	index = 0;
	current = 0;
	previos = 0;
	while (index < ac)
	{
		current = ft_create_elem(av[index]);
		if (previos)
			current->next = previos;
		previos = current;
		index++;
	}
	return (current);
}
