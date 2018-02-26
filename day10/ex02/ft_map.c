/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 12:14:32 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/26 12:50:09 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int len, int (*f) (int))
{
	int x;
	int *ret;

	ret = (int *)malloc(sizeof(ret) * len);
	x = 0;
	while (x < len)
	{
		ret[x] = f(tab[x]);
		x++;
	}
	return (ret);
}
