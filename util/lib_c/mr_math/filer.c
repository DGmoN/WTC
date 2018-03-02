/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 11:25:00 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/01 11:57:50 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mr_math.h"
#include "../strs/strs.h"

m_bool	is_whitespace(char e)
{
	return ((m_bool)(e == ' ' || e == '\n' || e == '\t'));
}

m_bool	is_opperation_symbol(char e, int (*op)(int, int))
{
	int index;

	index = is_char_in_str(e, OPPERATION_SYMBOLS, 0);
	if (index < 0)
		return (FALSE);
	return (TRUE);
}

op_prior get_priority(char e)
{
  if (e == '/' || e == '*')
    return (MULY_DIV);
  if (e == '+' || e == '-')
    return (ADD_SUB);
  if (e == '^')
    return (EXPONENT);
  return (PARENTHESIES);
}
