/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expressions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 10:09:47 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/03 14:32:21 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mr_math.h"
#include <stdlib.h>
#include "../str_split/str_split.h"
#include "../strs/strs.h"


int eval_expr(char *e)
{
	resolve(e);
}

char *simplify(char *e)
{
	char *h_res;
	char *holder;
	int ret;
	int start;
	int end;

	printf("%s\n", e);
	end = 0;
	start = 0;
	while (block_bounds(e, "()", &start, &end))
	{
		holder = sub_str(e, start, end);
		printf("\t%s\n\t", holder);
		h_res = simplify(trim(holder, 1, 1));
		ret = resolve(h_res);
	}
	resolve(e);
	return (trim(holder, 1, 1));
}

int		resolve(char *e)
{
	artifact 	*source;
	artifact 	*arts;
	int 		index;
	
	index = 0;
	source = linkify(count_words(e, " "), split(e, " "));
	arts = source;
	while (arts->next)
	{
		if (arts->next->type == OPPERATOR)
		{
			do_math(arts, arts->next);
			arts->next = arts->next->next->next;
			printf("%s\n", arts->askii);
			arts = source;
		}
		arts = arts->next;
		index++;
	}
	while (source != 0)
	{
		printf("%s->", source->askii);
		source = source->next;
	}
}

void	do_math(artifact *p, artifact *c)
{
	int num1;
	int num2;
	int result;
	op opper;

	opper = get_op(c->askii[0]);
	str_to_num(p->askii, 10, &num1);
	str_to_num(c->next->askii, 10, &num2);
	result = opper(num2, num1);
	p->askii = num_to_str(result, 10, p->askii);
}


