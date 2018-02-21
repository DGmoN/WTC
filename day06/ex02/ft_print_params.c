/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 08:10:18 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/21 08:10:21 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_putchar(char e);

int		main(int argc, char **argv)
{
	int c;

	c = 0;
	while (c < argc)
	{
		ft_putstr(argv[c]);
		ft_putchar('\n');
		c++;
	}
	return (0);
}
