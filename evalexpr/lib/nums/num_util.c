/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 15:22:53 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/01 11:38:38 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../nums/nums.h"
#include "../strs/strs.h"

int	power(int base, int to)
{
	int x;
	int ret;

	ret = 1;
	x = 0;
	while (x < to)
	{
		ret *= base;
		x++;
	}
	return (ret);
}

int	digits_in_num(int num, int base)
{
	int remainder;
	int index;

	if (num == 0)
		return (1);
	remainder = num;
	index = 0;
	while (remainder != 0)
	{
		remainder = remainder / base;
		index++;
	}
	return (index);
}

int	is_number_char(char e, int expected_base)
{
	int		index;
	char	*num_chars;

	num_chars = "0123456789ABCDEF";
	index = is_char_in_str(e, num_chars, 0);
	return (index < expected_base);
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
