/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 11:20:22 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/01 11:30:21 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mr_math.h"
#include <stdlib.h>

int	count_symbols(char *e)
{
	int index;
	int count;
	int reading;

	index = 0;
	count = 0;
	while (e[index])
	{
		if (e[index] == ' ')
		{
			if (reading)
				count++;
			reading = 0;
		}
		else
			reading = 1;
		index++;
	}
	if (index > 0)
		return (count + 1);
	return (count);
}
