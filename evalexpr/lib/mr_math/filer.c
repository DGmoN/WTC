/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 11:25:00 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/03 12:27:46 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mr_math.h"
#include "../strs/strs.h"

op ops[6] = {&add, &subtract, &multiply, &devide, &mod, &power};

m_bool	is_whitespace(char e)
{
	return ((m_bool)(e == ' ' || e == '\n' || e == '\t'));
}

op get_op(char e)
{
	int target;

	target = is_char_in_str(e, OPPERATION_SYMBOLS, 0);
	return (ops[target]);
}

int	phaze_match(int e, char c)
{
	if ((c == '*' || c == '/' || c == '%') && e == 1)
		return (1);
	if (c == '^' && e == '0')
		return (1);
	if ((c == '+' || c == '-') && e == 2)
		return (1);
	return (0);
}
