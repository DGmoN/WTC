/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 13:46:15 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/17 13:59:01 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
void	ft_logic(int x, int y, int vx, int vy);
void	ft_putcnr(int x, int y);

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
		{
			ft_putcnr((vx) / (x - 1), (vy) / (y - 1));
		}
		else
			ft_putchar('*');
	}
	else
	{
		if (vx == 0 || vx == x - 1)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}

void	ft_putcnr(int x, int y)
{
	if (x + y == 0 || x + y == 2)
		ft_putchar('/');
	else if (x + y == 1)
		ft_putchar('\\');
}
