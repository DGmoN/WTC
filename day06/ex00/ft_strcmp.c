/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 10:35:45 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/21 08:02:14 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int cntr;
	int ret;

	ret = 0;
	cntr = 0;
	while (s1[cntr] != 0)
	{
		ret += s1[cntr];
		cntr++;
	}
	cntr = 0;
	while (s2[cntr] != 0)
	{
		ret -= s2[cntr];
		cntr++;
	}
	return (ret);
}
