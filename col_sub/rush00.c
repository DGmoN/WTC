/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 11:44:00 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/17 11:50:06 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
void	ft_logic(int x, int y, int vx, int vy);

void	rush(int x, int y)
{
	int hline;
	int vline;

	hline = 0;
	while (hline < y)
	{
		vline = 0;
		while (vline < x)
		{
			ft_logic(x, y, vline, hline);
			vline++;
		}
		ft_putchar('\n');
		hline++;
	}
}

void	ft_logic(int x, int y, int vx, int vy)
{
	if ((vy == 0 || vy == y - 1))
	{
		if (vx == 0 || vx == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (vx == 0 || vx == x - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}
