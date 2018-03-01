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

# define PARENTHESIES 0
# define EXPONENT 1
# define MULY_DIV 2
# define ADD_SUM 3
# define OPPERATION_SYMBOLS "+-*/%"

typedef enum	e_math_bool
{
	FALSE,
	TRUE
}				m_bool;

typedef struct	s_symbol
{
	int		value;
	char	*aski;
	struct s_symbol	*next;
	struct s_symbol	*previos;
}				symbol;

typedef struct	s_oppertor
{
	symbol	base;
	int		priority;
	int 	(*operation)(int a, int b);
}				opperatr;

typedef struct	s_segment
{
	symbol	base;
}				express;

m_bool	is_whitespace(char e);
int	count_symbols(char *e);

#endif
