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

#include "num_util.h"

int	main(int argn, char **args)
{
	int		num1;
	int		num2;
	char	opperator;

	if (argn - 1 < 3)
		return (0);

	num1 = str_to_num(args[0], 10);
	num2 = str_to_num(args[1], 10);

	printf("%i, %i", num1, num2);
}
