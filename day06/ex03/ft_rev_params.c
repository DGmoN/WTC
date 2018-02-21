/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 08:14:27 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/21 08:14:31 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int count;

	count = 0;
	while (count < argc)
	{
		ft_putstr(argv[argc - count - 1]);
		ft_putchar('\n');
		count++;
	}
	return (0);
}
