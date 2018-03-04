/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mr_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 11:13:09 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/04 17:12:26 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MR_MATH_H
# define MR_MATH_H
# define OPPERATION_SYMBOLS "+-*/%^"

typedef int		(*t_op)(int, int);

typedef enum	e_math_bool
{
	FALSE,
	TRUE
}				e_bool;

typedef	enum	e_type
{
	VALUE,
	OPPERATOR
}				type;

typedef	struct	s_artifact
{
	char	*askii;
	type	type;
	struct s_artifact 	*next;
}				artifact;

int 		eval_expr(char *e);
int			multiply(int a, int b);
int			devide(int a, int b);
int			add(int	a, int b);
int			subtract(int a, int b);
int			mod(int	a, int b);
int			phaze_match(int e, char c);
char 		*simplify(char *e);
t_op		get_op(char e);
char		*resolve(char *e);
void		run_phaze(artifact *start, int phaze);
void 		do_math(artifact *p, artifact *h);
artifact	*create_artifact(char *askii);
artifact	*linkify(int count, char **e);
int			count_links(artifact *source);

#endif
