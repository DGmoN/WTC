/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:35:42 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/28 12:42:18 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *list)
{
	t_list	*current;
	t_list	*next;

	current = list;
	while (next->next)
	{
		next = current->next;
		free(current);
	}
}
