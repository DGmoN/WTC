/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   artifacts.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/04 14:48:18 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/04 17:11:59 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mr_math.h"
#include "../strs/strs.h"
#include <stdlib.h>

artifact	*create_artifact(char *askii)
{
	artifact *ret;

	ret = malloc(sizeof(artifact));
	ret->type = (type)(is_char_in_str(askii[0], OPPERATION_SYMBOLS, 0) >= 0);
	ret->askii = askii;
	ret->next = 0;
	return (ret);
}

artifact	*linkify(int count, char **e)
{
	int			index;
	artifact	*current;
	artifact	*last;
	artifact	*first;

	index = 0;
	last = 0;
	first = 0;
	while (index < count)
	{
		current = create_artifact(e[index]);
		if (last)
			last->next = current;
		last = current;
		if (!first)
			first = last;
		index++;
	}
	return (first);
}

int			count_links(artifact *source)
{
	int			count;
	artifact	*hold;

	count = 0;
	hold = source;
	while (hold)
	{
		count++;
		hold = hold->next;
	}
	return (count);
}
