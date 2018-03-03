/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 07:19:30 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/03 14:31:54 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "str_split.h"
#include "../strs/strs.h"

char	*sub_str(char *sentence, int start, int end)
{
	int		index;
	char	*ret;
	ret = (char *)malloc(sizeof(ret) * (end - start));
	index = start;
	while (index < end)
	{
		ret[index - start] = sentence[index];
		index++;
	}
	ret [index - start] = 0;
	return (ret);
}

char	*slice_block(char *sentence, char open, char close)
{
	int		start;
	int		end;
	
	start = first_index_of(sentence, open, 0);
	end = last_index_of(sentence, close, 0);
	if(start + end <= 0)
		return ((void*) 0);
	return (sub_str(sentence, start, end));
}

char 	*trim(char *subj, int start, int end)
{
	return (sub_str(subj, start, str_len(subj) - end));
}

char	*replace(char *haystack, char *needle, char *substitute)
{
	int		i[2];
	char	*ret;
	int		index;
	int		len[4];

	i[0] = 0;
	i[1] = 0;
	if(!find_item(haystack, needle, &i[0], &i[1]))
		return ((void *)0);
	len[0] = str_len(haystack);
	len[1] = str_len(needle);
	len[2] = str_len(substitute);
	len[3] = (len[0] - len[1]) + len[2];
	ret = (char *)malloc(sizeof(ret) * len[3]);
	index = 0;
	while (index < len[3])
	{
		if (index >= i[0] && index < i[1])
		{
			ret[index] = substitute[index - i[0]];
		}	
		else if (index >= i[1])
		{
			ret[index] = haystack[index - (len[2] - len[1])];
		}
		else
		{
			ret[index] = haystack[index];
		}
		index++;
	}
	ret[index] = 0;
	return (ret);
}
