/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 07:21:34 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/22 07:22:56 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int delta;
	int	index;
	int	*ret;

	delta = max - min;
	index = 0;
	if (delta <= 0)
		return (NULL);
	ret = (int *)malloc(sizeof(int) * delta);
	while (index < delta)
	{
		ret[index] = min + index;
		index++;
	}
	return (ret);
}
