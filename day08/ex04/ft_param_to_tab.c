/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 16:13:38 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/24 17:30:19 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

char					**ft_split_whitespaces(char *str);

struct	s_stock_par		*ft_param_to_par(int ac, char **av)
{
	t_stock_par	*ret;
	int			index;

	index = 0;
	ret = (t_stock_par *)malloc(sizeof(ret) * (ac + 1));
	while (av[index])
	{
		ret[index] = parse(av[index]);
		index++;
	}
	ret[index] = parse(av[index]);
	return (ret);
}

struct	s_stock_par		parse(char *str)
{
	struct s_stock_par holder;

	holder = (t_stock_par *)malloc(sizeof(holder));
	holder->size_param = ft_strlen(str);
	holder->str = &av[index][0];
	holder->copy = str[0] ? str_dup(str) : 0;
	holder->tab = str[0] ? ft_split_whitespaces(av[index]) : 0;
	return (holder);
}
