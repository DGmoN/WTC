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

int	populate_arg_flag(char **args, int len, t_arg_flag *flag)
{
	int index;
	int count;
	
	index = 1;
	count = 0;
	while (index < len)
	{
		if (str_cmp(args[index], flag->flag) == 0)
		{
			while (count < flag->expected_params)
			{
				if(!args[index + count + 1])
					return (0);
				flag->param_data[count] = args[index + count + 1];
				count++;
			}
			return (1);
		}
		index++;
	}
	return (0);
}
