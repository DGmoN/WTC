/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 14:27:12 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/26 15:41:40 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_util.h"
#include "str_disp.h"
#include "ops.h"
#include "num_util.h"

int big_error(void)
{
	put_number(0, 10);
	return (0);
}


int	main(int argn, char **args)
{
	int		num1;
	int		num2;
	char	opperator;
	int (*opp) (int a, int b);
	int		temp;
	
	if (argn - 1 < 3)
		return (0);
	if (str_len(args[2]) != 1)
		return (big_error());
	num1 = 0;
	num2 = 0;
	if (!str_to_num(args[1], 10, &num1) || !str_to_num(args[3], 10, &num2))
		return (big_error());
	opperator = args[2][0];
	opp = is_opperation_valid(opperator, num2);
	if (opp == (void *)0)
		return (big_error());
	temp = opp(num1, num2);
	put_number(temp, 10);
	return (0);
}
