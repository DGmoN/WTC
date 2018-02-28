/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 15:20:24 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/28 16:01:16 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "args_util.h"
#include "str_util.h"

int	find_index_of_arg(char **args, int len, char *argtext)
{
	int index;

	index = 1;
	while (index < len)
	{
		if (str_cmp(args[index], argtext) == 0)
			return (index);
		index++;
	}
	return (-1);
}

int	parse_num_arg(int len, char **args, char *flag, int base)
{
	int	index;
	int res;

	index = find_index_of_arg(args, len, flag);
	if (index < 0)
		return (0);
	if (!str_to_num(args[index + 1], base, &res))
		return (0);

	return (res);
}
