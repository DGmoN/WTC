/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 14:35:16 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/26 14:59:47 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPS_H
# define OPS_H

#include "str_util.h"
#include "num_arr.h"

# define OP_VALID(a, x, b) is_opperation_valid(a, x, b)

int	multiply(int a, int b);
int	devide(int a, int b);
int	diff(int a, int b);
int	sum(int a, int b);
int	mod(int a, int b);

int 	(*OPPERATION[6]) (int x, int y) = {&multiply, &devide, &diff, &sum, &mod, (void*)0};
int		opperchars[5]	= {'*', '/', '-', '+', '%'};

typedef int(*OPP) (int,int);

OPP	is_opperation_valid(char x, int b)
{
	int opp_index;
	
	opp_index = get_num_index(opperchars, x, 5);
	if (opp_index < 0)
		return (void *)0;
	if ( x == '/' || x == '%')
		if (b < 0)
			return ((void *)0);
	return (OPPERATION[opp_index]);
}

#endif
