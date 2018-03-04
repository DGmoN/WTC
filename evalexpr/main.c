/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 08:37:43 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/04 14:06:41 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/mr_math/mr_math.h"
#include "lib/strs/strs.h"
#include "lib/str_split/str_split.h"

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
