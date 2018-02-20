/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 11:14:48 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/20 11:40:04 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str);
int		is_char_alpha(char e);

int		is_char_alpha(char e)
{
	return (e >= 'a' && e <= 'z');
}

int		ft_str_is_lowercase(char *str)
{
	int count;
	int res;

	count = 0;
	while (str[count] != 0)
	{
		if (is_char_alpha(str[count]) != 0)
		{
			return (0);
		}
		count++;
	}
	return (1);
}
