/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 08:33:31 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/20 14:10:00 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char e);

void	ft_putstr(char *str)
{
	int count;

	count = 0;
	while (str[count] != 0)
	{
		ft_putchar(str[count]);
		count++;
	}
}
