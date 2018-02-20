/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 12:31:13 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/19 13:51:28 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int index;

	index = 0;
	while (str[index] != 0)
	{
		if (str[index] >= 65 && str[index] <= 90)
			str[index] = str[index] + 32;
		index++;
	}
	return (str);
}
