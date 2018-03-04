/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:27:31 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/04 14:06:21 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../nums/nums.h"
#include "strs.h"

int	is_numeric(char *e)
{
	int index;

	index = 0;
	while (e[index])
	{
		if (is_char_in_str(e[index], "0123456789", 0) < 0)
			return (-1);
		index++;
	}
	return (index);
}

int	is_char_in_str(char e, char *comp, int offset)
{
	int index;

	index = offset;
	while (comp[index])
	{
		if (comp[index] == e)
			return (index);
		index++;
	}
	return (-1);
}

int	str_len(char *e)
{
	int index;

	index = 0;
	while (e[index])
		index++;
	return (index);
}

int	str_cmp(char *a, char *b)
{
	int index;
	int len;
	int total;

	len = str_len(a);
	len -= str_len(b);
	if (len != 0)
		return (len);
	index = 0;
	total = 0;
	while (a[index] && b[index])
	{
		total += a[index] - b[index];
		index++;
	}
	return (total);
}

int	find_first_of(char *e, char *b, int offset)
{
	int count;
	int comp;

	count = offset;
	while (e[count])
	{
		comp = 0;
		while (b[comp])
		{
			if (b[comp] == e[count])
				return (count);
			comp++;
		}
		count++;
	}
	return (-1);
}
