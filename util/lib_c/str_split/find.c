/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 07:38:30 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/04 14:39:40 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_split.h"
#include "../strs/strs.h"

int	first_index_of(char *str, char find, int offset)
{
	int index;

	index = offset;
	while (str[index])
	{
		if (str[index] == find)
			return (index);
		index++;
	}
	return (-1);
}

int	last_index_of(char *str, char find, int offset)
{
	int index;

	index = (str_len(str) - offset);
	while (index > -1)
	{
		if (str[index] == find)
			return (index + 1);
		index--;
	}
	return (-1);
}

int	block_bounds(char *subj, char *limiters, int *start, int *end)
{
	int index;
	int stack;

	index = *end;
	stack = 0;
	while (subj[index])
	{
		if (subj[index] == limiters[0])
		{
			if (stack == 0)
				*start = index;
			stack++;
		}
		else if (subj[index] == limiters[1])
		{
			stack--;
			if (stack == 0)
			{
				*end = index + 1;
				return (1);
			}
		}
		index++;
	}
	return (0);
}
