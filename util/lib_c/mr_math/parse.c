/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 11:20:22 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/01 11:30:21 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mr_math.h"
#include <stdlib.h>

express *break_uppart(char *e)
{
	int index;
	express *result;
	int	symbol_count;
	char **symbol_words;

	index = 0;
	symbol_count = count_words(e, "\t \n");
	symbol_words = split(e, "\t \n");
	result = malloc(sizeof(express) * symbol_count);
}

int	count_symbols(char *e)
{
	int index;
	int count;
	int reading;

	index = 0;
	count = 0;
	while (e[index])
	{
		if (e[index] == ' ')
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
