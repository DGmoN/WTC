/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 12:25:47 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/20 12:58:28 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int index;
	int offset;

	index = 0;
	while (dest[index] != 0)
		index++;
	offset = index;
	index = 0;
	while (src[index] != 0)
	{
		dest[offset + index] = src[index];
		index++;
	}
	dest[index + offset] = 0;
	return (dest);
}
