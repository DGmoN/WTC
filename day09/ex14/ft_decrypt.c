/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 06:33:38 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/23 14:21:41 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_perso.h"
#include <stdlib.h>

int			count_peeps(char *e)
{
	int count;
	int ret;

	count = 0;
	ret = 0;
	while (e[count])
	{
		if (e[count] == ';')
			ret++;
		count++;
	}
}

char	*pull_from(char *e, int start, int len)
{
	int 	index;
	char	*ret;
	int		chare;
	ret = (char *)malloc(sizeof(ret) * len);
	index = start;
	chare = 0;
	while(index < start + len)
	{
		ret[chare] = e[index];
		index++;
		chare++;
	}
	return (ret);
}

char		**break_peeps(char *str, int words, char delim)
{
	char	**ret;
	int		index;
	char	*hold;
	int		offset;
	int		word;

	ret = (char**)malloc(sizeof(ret) * (words + 1));
	index = 0;
	offset = 0;
	word = 0;
	while (str[index] != 0)
	{
		if	(str[index] == delim || str[index + 1] == 0)
		{
			ret[word] = pull_from(str, offset, index - offset);
			offset = index + 1;
			word++;
		}
		index++;
	}
	return (ret);
}

int		str_to_num(char *str)
{
	int x;
	int len;
	int ret;
	int pow;
	int powc;

	len = 0;
	while (str[len])
		len++;
	ret = 0;
	x = 0;
	pow = 1;
	while (str[x] != 0)
	{
		powc = 0;
		pow = 1;
		while (powc < len - x - 1)
		{
			pow *= 10;
			powc++;
		}
		ret += (pow) * (str[x] - '0');
		x++;
	}
	return (ret);
}

t_perso	*ft_decrypt(char *str)
{
	t_perso	*ret;
	int 		words;
	int			index;
	char		**peepWords;
	t_perso		peep;
	char		**peppq;

	words = count_peeps(str);
	ret = (t_perso*)malloc(sizeof(ret) * words);
	index = 0;
	peepWords = break_peeps(str, words, ';');
}

