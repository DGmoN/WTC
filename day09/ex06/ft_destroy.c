/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 21:38:31 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/22 21:56:24 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int q;
	int w;

	q = 0;
	while (factory[q])
	{
		w = 0;
		while (factory[q][w])
		{
			free(factory[q][w]);
			w++;
		}
		free(factory[q]);
		q++;
	}
}
