/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 07:19:30 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/22 07:20:32 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *e)
{
	int		len;
	int		index;
	char	*ret;

	index = 0;
	while (e[index] != 0)
		index++;
	ret = (char *)malloc(sizeof(char) * index);
	index = 0;
	while (e[index] != 0)
	{
		ret[index] = e[index];
		index++;
	}
	ret[index] = 0;
	return (ret);
}
