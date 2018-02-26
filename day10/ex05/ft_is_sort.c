/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 13:17:57 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/26 14:16:31 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sort(int *tab, int length, int (*f) (int, int))
{
	int x;
	int diff_total;
	int zeros;
	int holder;

	x = 1;
	diff_total = 0;
	zeros = 0;
	holder = 0;
	while (x < length)
	{
		holder = f(tab[x - 1], tab[x]);
		if (holder == 0)
			zeros++;
		diff_total += holder;
		x++;
	}
	if (diff_total < 0)
		diff_total *= -1;
	if (zeros == (length - 1))
		return (1);
	else
	{
		if (!(diff_total == length - 1))
			return (0);
	}
	return (1);
}
