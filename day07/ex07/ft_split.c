/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 12:01:54 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/22 14:06:08 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		char_in_str(char *str, char e)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (str[index] == e)
			return (1);
		index++;
	}
	return (0);
}

int		next(char *str, char *delims, int *offset)
{
	int index;
	int found_char;
	int off;
	int	word_len;

	found_char = 0;
	word_len = 0;
	off = *offset;
	index = *offset;
	while (str[index++] != 0)
	{
		if (!found_char && !char_in_str(delims, str[index]))
			found_char = 1;
		if (char_in_str(delims, str[index]))
		{
			if (found_char)
				break ;
			else
				off++;
		}
		if (found_char)
			word_len++;
	}
	*offset = off;
	return (word_len);
}

int		count_words_by_delimset(char *str, char *delims)
{
	int e;
	int escape;
	int count;

	if (!str[0])
		return (0);
	count = 0;
	e = 0;
	escape = 0;
	while (str[e])
	{
		if (char_in_str(delims, str[e]))
			escape = 1;
		else
		{
			if (escape)
				count++;
			escape = 0;
		}
		e++;/goinfre/wgourley/Desktop/WTC/day07/ex06/ft_convert_base.c
	}
	return (count + 1);
}

char	*extract_word(char *str, int start, int len)
{
	int		count;
	char	*ret;

	if (start < 0)
	{
		start = 0;
		len--;
	}
	count = 0;
	ret = (char *)malloc(sizeof(ret) * (len + 1));
	while (count < len)
	{
		ret[count] = str[start + count];
		count++;
	}
	ret[count] = 0;
	return (ret);
}

char	**ft_split(char *str, char *charset)
{
	int		wordcount;
	int		last_index;
	int		word_length;
	char	**holder;
	int		word;

	wordcount = count_words_by_delimset(str, charset);
	last_index = 0;
	word = 0;
	holder = (char **)malloc(sizeof(holder) * (wordcount + 1));
	while (word < wordcount)
	{
		word_length = next(str, charset, &last_index);
		holder[word] = extract_word(str, last_index, word_length + 2);
		last_index += word_length;
		word++;
	}
	holder[word] = 0;
	return (holder);
}
