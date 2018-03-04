/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 07:19:30 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/04 17:08:19 by wgourley         ###   ########.fr       */
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
	ret[index - start] = 0;
	return (ret);
}

char	*slice_block(char *sentence, char open, char close)
{
	int		start;
	int		end;

	start = first_index_of(sentence, open, 0);
	end = last_index_of(sentence, close, 0);
	if (start + end <= 0)
		return ((void*)0);
	return (sub_str(sentence, start, end));
}

char	*trim(char *subj, int start, int end)
{
	return (sub_str(subj, start, str_len(subj) - end));
}

void	pop_str(char *arr, int arr_off, char *put, int end)
{
	int index;
	int index2;

	index = arr_off;
	index2 = 0;
	while (index < arr_off + (end))
	{
		arr[index] = put[index2];
		index2++;
		index++;
	}
}

char	*replace(char *haystack, char *needle, char *substitute)
{
	int		i[2];
	char	*ret;
	int		len[4];

	i[0] = 0;
	i[1] = 0;
	if (!find_item(haystack, needle, &i[0], &i[1]))
		return ((void *)0);
	len[2] = str_len(substitute);
	len[3] = (str_len(haystack) - str_len(needle)) + len[2];
	ret = (char *)malloc(sizeof(ret) * len[3]);
	pop_str(ret, 0, haystack, i[0]);
	pop_str(ret, i[0], substitute, len[2]);
	pop_str(ret, i[0] + len[2], haystack + i[1], str_len(haystack));
	return (ret);
}
