/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 11:14:48 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/20 12:21:17 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str);
int		is_char_print(char e);

int		is_char_print(char e)
{
	return (e < 32);
}

int		ft_str_is_printable(char *str)
{
	int count;
	int res;

	count = 0;
	while (str[count] != 0)
	{
		if (is_char_print(str[count]) != 0)
		{
			return (0);
		}
		count++;
	}
	return (1);
}
