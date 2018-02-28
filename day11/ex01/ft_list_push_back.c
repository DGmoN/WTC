/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 12:53:44 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/28 12:38:03 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **list, void *data)
{
	t_list *temp;
	t_list *str;

	temp = ft_create_elem(data);
	str = *list;
	if (temp)
	{
		while (str->next)
			str = str->next;
		str->next = temp;
	}
}
