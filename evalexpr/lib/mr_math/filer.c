/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 11:25:00 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/04 15:13:30 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mr_math.h"
#include "../strs/strs.h"
#include "../nums/nums.h"

t_op g_ops[6] = {&add, &subtract, &multiply, &devide, &mod, &power};

e_bool	is_whitespace(char e)
{
	return ((e_bool)(e == ' ' || e == '\n' || e == '\t'));
}

t_op	get_op(char e)
{
	int target;

	target = is_char_in_str(e, OPPERATION_SYMBOLS, 0);
	return (g_ops[target]);
}

int		phaze_match(int e, char c)
{
	if ((c == '*' || c == '/' || c == '%') && e == 1)
		return (1);
	if (c == '^' && e == 0)
		return (1);
	if ((c == '+' || c == '-') && e == 2)
		return (1);
	return (0);
}
