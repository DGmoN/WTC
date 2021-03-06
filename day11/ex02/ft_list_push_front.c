/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:33:42 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/28 12:38:44 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **list, void *data)
{
	t_list *temp;
	t_list *str;

	temp = ft_create_elem(data);
	str = *list;
	if (temp)
	{
		temp->next = str;
	}
}
