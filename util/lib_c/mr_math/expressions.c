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
	simplify(e);
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
	int			word_count;
	int			dat[3];
	artifact	*list;
	artifact	*holder;
	artifact	*previos;

	printf("Resloving: %s\n", e);
	dat[0] = 0;	/* index */
	dat[1] = 0;
	dat[2] = count_words(e, " ") - 1;
	list = linkify(word_count, split(e, " "));
	while (dat[1] < 3)
	{
		if (dat[0] % (dat[2]) == 0)
		{
			holder = list;
			dat[1]++;
		}
		if (dat[0] % 2)
		{
			printf("Testing phaze: %s, %i\n", holder->askii, dat[1]);
			if (phaze_match(dat[1], holder->askii[0]))
			{
				printf("Phaze match: %i %s\n", dat[1], holder->askii);
				do_math(previos, holder, holder->next->next);
				printf("Result: %s\n", previos->askii);
			}
		}
		previos = holder;
		holder = holder->next;
		dat[0]++;
	}
}

void	do_math(artifact *p, artifact *c, artifact *patch)
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
//	p->next = patch;
}

artifact	*linkify(int count, char **e)
{
	int index;
	artifact *last;
	artifact *current;

	index = 0;
	while (index < count)
	{
		current = malloc(sizeof(current));
		current->askii = e[index];
		current->next = 0;
		current->back = 0;
		if(last)
			current->next = last;
		last = current;
		index++;
	}
	return (current);
}
