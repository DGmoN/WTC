/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_arr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 09:55:44 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/27 09:55:52 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "num_arr.h"

int	get_num_index(int *arr, int e, int len)
{
	int index;

	index = 0;
	while (index < len)
	{
		if (arr[index] == e)
			return (index);
		index++;
	}
	return (-1);
}
