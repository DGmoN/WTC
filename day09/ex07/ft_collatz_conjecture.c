/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 22:25:43 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/22 22:44:04 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_collatz_conjecture(unsigned int base)
{
	int ret;

	if (base == 1)
		return (1);
	if (base % 2 == 0)
		ret = ft_collatz_conjecture(base / 2);
	else
		ret = ft_collatz_conjecture((3 * base) + 1);
	ret++;
	return (ret);
}
