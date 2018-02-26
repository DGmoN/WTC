/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_disp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 14:51:29 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/26 14:52:10 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char e)
{
	write(1, &e, 1);
}

void	put_str(char *e)
{
	int i;

	i = 0;
	while (e[i])
		put_char(e[i++]);
}

void	put_line(char *e)
{
	put_str(e);
	put_char('\n');
}

