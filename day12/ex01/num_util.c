/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 15:22:53 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/27 09:54:01 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "num_util.h"
#include "str_util.h"

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
	index = is_char_in_str(e, num_chars);
	return (index < expected_base);
}
