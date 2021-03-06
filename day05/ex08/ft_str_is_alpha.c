/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 11:14:48 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/20 11:30:36 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str);
int		is_char_alpha(char e);

int		is_char_alpha(char e)
{
	return (e >= 'a' && e <= 'z') || (e >= 'A' && e <= 'Z');
}

int		ft_str_is_alpha(char *str)
{
	int count;
	int res;

	res = 1;
	count = 0;
	while (str[count] != 0)
	{
		if (is_char_alpha(str[count]) == 0)
		{
			res = 0;
		}
		count++;
	}
	return (res);
}
