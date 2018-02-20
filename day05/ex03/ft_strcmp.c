/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 10:35:45 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/19 12:12:44 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int cntr;
	int ret;

	ret = 0;
	cntr = 0;
	while (s1[cntr] != 0 && s2[cntr] != 0)
	{
		ret += s2[cntr] - s1[cntr];
		cntr++;
	}
	return (ret);
}
