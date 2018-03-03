/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mr_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 11:13:09 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/03 14:10:34 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MR_MATH_H
# define MR_MATH_H
#include "../nums/nums.h"
# define OPPERATION_SYMBOLS "+-*/%^"

typedef int (*op)(int, int);

typedef enum	e_math_bool
{
	FALSE,
	TRUE
}				m_bool;

typedef enum e_op_prior
{
	EXPONENT,
	MULY_DIV,
	ADD_SUB
} 						op_prior;

typedef	struct	s_artifact
{
	char 				*askii;
	struct s_artifact 	*next;
	struct s_artifact 	*back;
}				artifact;

m_bool		is_whitespace(char e);
int			count_symbols(char *e);
int 		eval_expr(char *e);
int			multiply(int a, int b);
int			devide(int a, int b);
int			add(int	a, int b);
int			subtract(int a, int b);
int			mod(int	a, int b);
op_prior 	get_priority(char e);
char 		*simplify(char *e);
op			get_op(char e);
int 		resolve(char *e);
artifact	*linkify(int count, char **e);
void 		do_math(artifact *p, artifact *h, artifact *patch);
#endif
