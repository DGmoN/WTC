/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 23:36:44 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/23 02:01:26 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_whitespace(char a)
{
	return (a == ' ' || a == '\n' || a == '\n');
}

int		find_str(char *source, char *word)
{
	int index;
	int total;
	int windex;

	total = 0;
	index = 0;
	windex = 0;
	while (source[index])
	{
		if (!is_whitespace(source[index]) && word[index])
		{
			total += source[index] - word[windex];
			windex++;
		}
		index++;
	}
	return (total == 0);
}

char	*to_lower(char *e)
{
	int i;

	i = 0;
	while (e[i])
	{
		if (e[i] >= 'A' && e[i] <= 'Z')
			e[i] = e[i] - 'A' + 'a';
		i++;
	}
	return (e);
}

int		main(int argn, char **args)
{
	int		i;
	char	*cword;

	i = 1;
	while (i < argn)
	{
		cword = to_lower(args[i]);
		if (find_str(cword, "president") ||
				find_str(cword, "attack") ||
				find_str(cword, "powers"))
		{
			write(1, "Alert!!!\n", 9);
		}
		i++;
	}
	return (0);
}
