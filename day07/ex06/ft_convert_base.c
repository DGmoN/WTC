/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 08:55:49 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/22 11:57:29 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		char_to_real_number(char a);

int		str_len(char *e)
{
	int c;

	c = 0;
	while (e[c] != 0)
	{
		if (char_to_real_number(e[c]) < 0)
			return (-1);
		c++;
	}
	return (c);
}

int		char_to_real_number(char a)
{
	if (a <= 'F' && a >= 'A')
		return (a - 55);
	if (a >= '0' && a <= '9')
		return (a - 48);
	if (a >= 0 && a <= 9)
		return (a + 48);
	if (a >= 10 && a <= 16)
		return (a + 55);
	return (-1);
}

int		str_to_num(char *str, int base)
{
	int x;
	int len;
	int ret;
	int pow;
	int powc;

	len = str_len(str);
	if (len < 0)
		return (0);
	ret = 0;
	x = 0;
	pow = 1;
	while (str[x] != 0)
	{
		powc = 0;
		pow = 1;
		while (powc < len - x - 1)
		{
			pow *= base;
			powc++;
		}
		ret += (pow) * char_to_real_number(str[x]);
		x++;
	}
	return (ret);
}

char	*num_to_str(int e, int base)
{
	int		index;
	int		current;
	int		len;
	char	*ret;

	len = 0;
	index = 0;
	current = e;
	while (current > 0)
	{
		len++;
		current = current / base;
	}
	ret = (char *)malloc(sizeof(ret) * (len));
	current = e;
	while (current > 0)
	{
		ret[len - index - 1] = char_to_real_number((current % base));
		current = current / base;
		index++;
	}
	ret[index] = 0;
	return (ret);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		anbr;
	int		base;
	int		nbase;
	char	*ret;

	base = str_to_num(base_from, 10);
	nbase = str_to_num(base_to, 10);
	anbr = str_to_num(nbr, base);
	ret = num_to_str(anbr, nbase);
	return (ret);
}
