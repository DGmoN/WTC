/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:27:31 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/26 15:28:45 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "num_util.h"
#include "str_util.h"

int		is_numericb(char *e)
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

int		is_char_in_str(char e, char *comp)
{
	int ret;
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

int	str_to_num(char *e, int base)
{
	int len;
	int index;
	int ret;
	int rnum;

	index = 0;
	ret = 0;
	len = str_len(e);
	while (e[index])
	{
		rnum = e[index] - '0';
		ret += (base * ((len - index) * power(base, len - index)));
		index++;
	}
	return (ret);
}

int	str_len(char *e)
{
	int index;

	index = 0;
	while (e[index])
		index++;
	return (index);
}
