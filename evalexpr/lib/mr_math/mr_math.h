/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mr_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 11:13:09 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/01 11:44:49 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MR_MATH_H
# define MR_MATH_H
#include "../nums/nums.h"
# define OPPERATION_SYMBOLS "+-*/%^"

typedef enum	e_math_bool
{
	FALSE,
	TRUE
}				m_bool;

typedef enum e_op_prior
{
	PARENTHESIES,
	EXPONENT,
	MULY_DIV,
	ADD_SUB
} 						op_prior;

typedef struct	s_symbol
{
	int		value;
	char	*aski;
	struct s_oppertor	*next;
}								symbol;

typedef struct	s_oppertor
{
	op_prior					priority;
	int								value;
	struct	s_symbol	*next;
	int 						(*operation)(int a, int b);
}				opperator;

m_bool	is_whitespace(char e);
int	count_symbols(char *e);
int eval_expr(char *e);
int		multiply(int a, int b);
int		devide(int a, int b);
int		add(int	a, int b);
int		subtract(int a, int b);
int		mod(int	a, int b);
op_prior get_priority(char e);
m_bool	is_opperation_symbol(char e, int (*op)(int, int));


#endif
