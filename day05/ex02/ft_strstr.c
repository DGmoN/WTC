/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 09:21:07 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/19 10:25:48 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *src, char *to_find)
{
	int index;
	int starting;
	int running;

	index = 0;
	starting = 0;
	running = 0;
	while (src[index] != 0)
	{
		if (src[index] == to_find[starting])
			running = 1;
		else
		{
			running = 0;
			starting = 0;
		}
		if (running > 0)
			starting++;
		if (to_find[starting] == 0)
			return (&(src[(index + 1) - starting]));
		index++;
	}
	return (NULL);
}
