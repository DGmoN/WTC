/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 08:15:43 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/21 08:32:19 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char e);
void	ft_putstr(char *str);
int		ft_strcmp(char *str1, char *str2);
int		strsum(char *str);

int		strsum(char *str)
{
	int c;
	int total;

	if (str[0] == 0)
		return (0);
	c = 0;
	total = 0;
	while (str[c] != 0)
	{
		total += str[c];
		c++;
	}
	return (total);
}

char	*get_lower(char **str2, int len, char *low)
{
	int		lowest;
	int		last_test;
	int		last_lowest_test;
	int		count;
	char	*loweststr;

	loweststr = low;
	lowest = strsum(loweststr);
	count = 0;
	last_lowest_test = 9999999;
	while (count < len)
	{
		last_test = strsum(str2[count]);
		if (last_test < last_lowest_test && lowest < last_test)
		{
			last_lowest_test = last_test;
			loweststr = str2[count];
		}
		count++;
	}
	return (loweststr);
}

int		main(int argc, char **argv)
{
	int		index;
	char	**lowest;
	char	*last;

	if (argc <= 1)
	{
		ft_putstr("Please supply arguments\n");
		return (-1);
	}
	lowest = argv + 1;
	index = 1;
	last = "\0";
	while (index < argc)
	{
		last = get_lower(lowest, argc - 1, last);
		ft_putstr(last);
		ft_putchar('\n');
		index++;
	}
	return (0);
}
