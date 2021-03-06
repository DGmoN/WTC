/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_util.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 15:20:22 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/27 09:52:00 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUM_UTIL_H
# define NUM_UTIL_H

int	power(int base, int to);
int	digits_in_num(int num, int base);
int	is_number_char(char e, int expected_base);

#endif
