/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 10:53:20 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/19 12:07:50 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int count;
	int ret;

	count = n;
	ret = 0;
	while (s1[count] != 0 && s2[count] != 0)
	{
		ret += s2[count] - s1[count];
		count++;
	}
	return (ret);
}
