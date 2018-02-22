/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 19:37:12 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/22 20:40:47 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int index;
	int chr;

	index = 0;
	while (str[index] != 0)
	{
		chr = str[index];
		if (chr >= 'A' && chr <= 'Z')
			chr = (((chr - 'A') + 42) % 26) + 'A';
		if (chr >= 'a' && chr <= 'z')
			chr = (((chr - 'a') + 42) % 26) + 'a';
		str[index] = chr;
		index++;
	}
	return (str);
}
