/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:06:54 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/28 12:33:11 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **list)
{
	t_list *current;
	t_list *previous;
	t_list *next;

	current = *list;
	previous = 0;
	while (current->next)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
}
