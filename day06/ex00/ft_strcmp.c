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
	int total1;
	int total2;
	int ret;

	ret = 0;
	cntr = 0;
	total1 = 0;
	while (s1[cntr] != 0)
	{
		total1 += s1[cntr];
		cntr++;
	}
	cntr = 0;
	total2 = 0;
	while (s2[cntr] != 0)
	{
		total2 += s2[cntr];
		cntr++;
	}

	ret = total1 - total2;
	
	return (ret);
}
