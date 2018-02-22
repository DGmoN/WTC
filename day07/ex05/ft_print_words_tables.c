/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 08:00:03 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/22 08:08:47 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char e);

void	fut_putstr(char *e)
{
	int c;

	c = 0;
	while (e[c] != 0)
	{
		ft_putchar(e[c]);
		c++;
	}
}

void	ft_print_words_tables(char **table)
{
	int c;

	c = 0;
	while (table[c] != 0)
	{
		fut_putstr(table[c]);
		ft_putchar('\n');
		c++;
	}
}
