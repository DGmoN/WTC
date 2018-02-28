/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 10:05:45 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/28 12:39:41 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list **list)
{
	t_list	*hold;
	int		index;

	hold = *list;
	index = 0;
	if (!hold->next)
		return (1);
	while (hold)
	{
		index++;
		if (!hold->next)
			break ;
		hold = hold->next;
	}
	return (index);
}
