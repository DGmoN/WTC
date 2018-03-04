/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 07:19:06 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/04 16:21:42 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "str_split.h"
#include "../strs/strs.h"

int		is_a(char e, char *delims)
{
	int index;

	index = 0;
	while (delims[index])
	{
		if (delims[index] == e)
		{
			return (1);
		}
		index++;
	}
	return (0);
}

int		find_word(char *sentecnt, char *delims, int *bounds)
{
	int index;
	int seeking;

	index = bounds[1];
	bounds[0] = index;
	seeking = 0;
	while (sentecnt[index])
	{
		if (is_a(sentecnt[index], delims))
		{
			if (seeking)
			{
				bounds[1] = index;
				return (1);
			}
			bounds[0] = index;
		}
		else if (!seeking)
		{
			seeking = 1;
			bounds[0] = index;
		}
		index++;
	}
	return (0);
}

int		find_item(char *sentence, char *word, int *start, int *end)
{
	int index;
	int windex;

	index = *end;
	windex = 0;
	while (sentence[index])
	{
		if (sentence[index] == word[windex])
		{
			if (!windex)
				*start = index;
			windex++;
		}
		else
		{
			if (word[windex] == 0)
				break ;
			windex = 0;
		}
		index++;
	}
	*end = index;
	if (word[windex] == 0)
		return (1);
	return (0);
}

char	**split(char *str, char *delims)
{
	int		i[2];
	char	**ret;
	int		index;

	ret = malloc((count_words(str, delims) + 1) * sizeof(char**));
	i[0] = 0;
	i[1] = 0;
	index = 0;
	while (find_word(str, delims, i))
	{
		ret[index++] = sub_str(str, i[0], i[1]);
	}
	ret[index] = sub_str(str, i[1], str_len(str));
	return (ret);
}

int		count_words(char *e, char *delims)
{
	int index;
	int count;
	int reading;

	index = 0;
	count = 0;
	while (e[index])
	{
		if (is_a(e[index], delims))
		{
			if (reading)
				count++;
			reading = 0;
		}
		else
			reading = 1;
		index++;
	}
	if (index > 0)
		return (count + 1);
	return (count);
}
