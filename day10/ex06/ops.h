/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 14:35:16 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/26 14:59:47 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPS_H
# define OPS_H

# define OP_VALID(a, x, b) is_opperation_valid(a, x, b)

int	multiply(int a, int b);
int	devide(int a, int b);
int	diff(int a, int b);
int	sum(int a, int b);
int	mod(int a, int b);

int	is_opperation_valid(int a, char x, int b)
{
	if ( x == '/' || x == '%')
		if (b == 0)
			return (0);
	return (0);
}

#endif
