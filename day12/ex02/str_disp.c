/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_disp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 14:51:29 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/28 14:47:00 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "num_util.h"

void	put_char(char e)
{
	write(1, &e, 1);
}

void	put_str(char *e)
{
	int i;

	i = 0;
	while (e[i])
		put_char(e[i++]);
}

void	put_nline(char *e, int lim)
{
	write(1, e, lim);
	put_char('\n');
}

void	put_line(char *e)
{
	put_str(e);
	put_char('\n');
}

void	put_number(int num, int base)
{
	int index;
	int len;
	int ch;
	int holder;
	int pow;

	len = digits_in_num(num, base);
	index = 0;
	holder = num;
	while (index < len)
	{
		if (holder < 0)
		{
			put_char('-');
			holder *= -1;
			index = 0;
		}
		pow = power(base, (len - index - 1));
		ch = holder / pow;
		holder = holder % pow;
		put_char(ch + '0');
		index++;
	}
}
