/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 10:01:38 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/27 12:32:26 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_len(char *str)
{
	int count;
	while (str[count])
		count++;
	return (count);
}

int		ft_strcmp(char *str1, char *str2)
{
	int lendiff;
	int delta;
	int index;

	lendiff = ft_strlen(str1) - ft_strlen(str2);
	if (lendiff != 0)
		return (lendiff);
	delta = 0;
	index = 0;
	while (str1[index])
	{
		delta += str1[index] - str2[index];
		index++;
	}
	return (delta);
}

int		ft_swap_index(char **tab, int i, int n)
{
	char *pnthold;

	pnthold = tab[i];
	tab[i] = tab[n];
	tab[n] = pnthold;
}

void	ft_sort_wordtab(char **tab)
{
	int itteration;
	int	alterations;
	int cycle;
	int max_cycles;

	max_cycles = ft_strlen(*tab);
	cycle = 0;
	printf("number of tabs: %i\n", max_cycles);
	while (alterations )
	{
		itteration = 1;
		alterations = -1;
		while (itteration < max_cycles)
		{
			if (ft_strcmp(tab[itteration - 1], tab[itteration]))
				alterations += ft_swap_index(tab, itteration - 1, itteration);
			itteration++;
		}
		if (alterations == 0)
			break;
		cycle++;
	}
}
