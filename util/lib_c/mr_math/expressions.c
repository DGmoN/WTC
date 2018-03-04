/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expressions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 10:09:47 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/04 17:00:30 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mr_math.h"
#include <stdlib.h>
#include "../str_split/str_split.h"
#include "../strs/strs.h"
#include "../nums/nums.h"

int		eval_expr(char *e)
{
	int hold;

	str_to_num(simplify(e), 10, &hold);
	return (hold);
}

char	*simplify(char *e)
{
	char	*h_res;
	char	*holder;
	char	*subject;
	int		i[2];

	i[0] = 0;
	i[1] = 0;
	subject = e;
	while (block_bounds(subject, "()", &i[0], &i[1]))
	{
		holder = sub_str(subject, i[0], i[1]);
		h_res = simplify(trim(holder, 1, 1));
		subject = replace(subject, holder, h_res);
	}
	return (resolve(subject));
}

int		can_math(int *phaze, artifact *current, artifact *prior)
{
	if (phaze_match(*phaze, current->askii[0]) && prior)
	{
		do_math(prior, current);
		prior->next = current->next->next;
		*phaze = 0;
		return (1);
	}
	return (0);
}

char	*resolve(char *e)
{
	artifact	*arties[3];
	int			phaze;

	arties[0] = linkify(count_words(e, " "), split(e, " "));
	phaze = 0;
	while (phaze < 3)
	{
		arties[1] = arties[0];
		while (count_links(arties[1]) > 1)
		{
			if (arties[1]->next->type == OPPERATOR)
				arties[2] = arties[1];
			else
			{
				if (can_math(&phaze, arties[1], arties[2]))
					arties[1] = arties[0];
				arties[2] = 0;
			}
			arties[1] = arties[1]->next;
		}
		phaze++;
	}
	return (arties[0]->askii);
}

void	do_math(artifact *p, artifact *c)
{
	int		num1;
	int		num2;
	int		result;
	t_op	opper;

	opper = get_op(c->askii[0]);
	str_to_num(p->askii, 10, &num1);
	str_to_num(c->next->askii, 10, &num2);
	result = opper(num1, num2);
	p->askii = num_to_str(result, 10, p->askii);
}
