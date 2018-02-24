/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 15:43:06 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/24 17:31:28 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H

# define FT_STOCK_PAR_H

# include <stdlib.h>

typedef struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;

int				ft_strlen(char *len)
{
	int ret;

	ret = 0;
	while (len[ret])
		ret++;
	return (ret);
}

char			*str_dup(char *str)
{
	int		len;
	int		count;
	char	*ret;

	count = 0;
	len = ft_strlen(str);
	ret = (char *)malloc(sizeof(ret) * (len + 1));
	while (str[count])
	{
		ret[count] = str[count];
		count++;
	}
	ret[count] = 0;
	return (ret);
}

#endif
