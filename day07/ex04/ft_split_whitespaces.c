/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 07:29:04 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/22 07:49:25 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned	int	is_whitespace_char(char e)
{
	return (e == '\t' || e == ' ' || e == '\n');
}

int				count_word(char *str)
{
	int	last_was_space;
	int	count;
	int	index;

	index = 0;
	count = 1;
	while (str[index] != 0)
	{
		if (is_whitespace_char(str[index]))
		{
			if (!last_was_space)
				count++;
			last_was_space = 1;
		}
		else
			last_was_space = 0;
		index++;
	}
	return (count);
}

char			*extract_word(char *str, int start, int len)
{
	int		count;
	char	*ret;

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

int				next_space(char *str, int *offset)
{
	int index;
	int found_char;
	int off;
	int	word_len;

	found_char = 0;
	word_len = 0;
	off = *offset;
	index = *offset;
	while (str[index] != 0)
	{
		if (!found_char && !is_whitespace_char(str[index]))
			found_char = 1;
		if (is_whitespace_char(str[index]))
			if (found_char)
				break ;
			else
				off++;
		if (found_char)
			word_len++;
		index++;
	}
	*offset = off;
	return (word_len);
}

char			**ft_split_whitespaces(char *str)
{
	int		wordcount;
	int		last_index;
	int		word_length;
	char	**holder;
	int		word;

	wordcount = count_word(str);
	last_index = 0;
	word = 0;
	holder = (char **)malloc(sizeof(holder) * (wordcount + 1));
	while (word < wordcount)
	{
		word_length = next_space(str, &last_index);
		holder[word] = extract_word(str, last_index, word_length);
		last_index += word_length;
		word++;
	}
	holder[word] = 0;
	return (holder);
}
