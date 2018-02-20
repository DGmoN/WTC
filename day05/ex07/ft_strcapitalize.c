/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 13:46:15 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/20 10:57:16 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_struppercase(char *str);
char	charify(char e, int *ifirst);
int		is_cap_char(char e);

int		is_cap_char(char e)
{
	if ((e >= 'A' && e <= 'Z'))
		return (1);
	else
		return (0);
}

char	*ft_struppercase(char *str)
{
	char	*clone;
	int		index;
	int		first;

	index = 0;
	first = 0;
	clone = str;
	while (clone[index] != 0)
	{
		if ((clone[index] >= 'A' && clone[index] <= 'Z') ||
				(clone[index] >= 'a' && clone[index] <= 'z'))
		{
			clone[index] = charify(clone[index], &first);
		}
		else
		{
			first = 0;
			clone[index] = clone[index];
		}
		index++;
	}
	clone[index] = 0;
	return (clone);
}

char	charify(char e, int *ifirst)
{
	if (is_cap_char(e) || (e >= 'a' && e <= 'z'))
	{
		if (is_cap_char(e))
		{
			if (*ifirst != 0)
				return (e + 32);
			else
			{
				*ifirst = 1;
			}
		}
		if (e >= 'a' && e <= 'z' && *ifirst == 0)
		{
			*ifirst = 1;
			return (e - 32);
		}
	}
	return (e);
}
