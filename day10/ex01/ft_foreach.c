/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 11:38:19 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/26 12:54:32 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int len, void (*f) (int))
{
	int x;

	x = 0;
	while (x < len)
	{
		f(tab[x]);
		x++;
	}
}
