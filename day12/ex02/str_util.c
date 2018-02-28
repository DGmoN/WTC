/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:27:31 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/28 15:29:19 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "num_util.h"
#include "str_util.h"

int	is_numeric(char *e)
{
	int index;

	index = 0;
	while (e[index])
	{
		if (is_char_in_str(e[index], "0123456789") < 0)
			return (0);
		index++;
	}
	return (1);
}

int	is_char_in_str(char e, char *comp)
{
	int index;

	index = 0;
	while (comp[index])
	{
		if (comp[index] == e)
			return (index);
		index++;
	}
	return (-1);
}

int	str_to_num(char *e, int base, int *set)
{
	int len;
	int index;
	int ret;
	int rnum;
	int neg;

	index = 0;
	ret = 0;
	len = str_len(e) - 1;
	neg = 1;
	while (e[index])
	{
		if (index == 0 && e[index] == '-')
			neg = -1;
		else
		{
			if (!is_number_char(e[index], base))
				return (0);
			rnum = e[index] - '0';
			ret += (rnum * power(base, len - index));
		}
		index++;
	}
	*set = ret * neg;
	return (1);
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
	if(len != 0)
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
