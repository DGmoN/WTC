/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 04:46:02 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/23 05:58:22 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **s, int len)
{
	int index;
	int ret;

	index = 1;
	ret = len;
	while (index < len)
	{
		if (s[index - 1] == 0)
		{
			s[index - 1] = s[index];
			ret--;
		}
		index++;
	}
	return (ret);
}
