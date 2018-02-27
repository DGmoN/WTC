/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 12:56:03 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/26 14:11:04 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_any(int *tab, int (*f) (char*))
{
	int x;

	x = 0;
	while (f[x] != 0)
	{
		f(tab[x]);
		x++;
	}
	return (x > 0);
}