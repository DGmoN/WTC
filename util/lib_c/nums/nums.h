/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_util.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 15:20:22 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/03 14:15:27 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMS_H
# define NUMS_H

int		power(int base, int to);
int		digits_in_num(int num, int base);
int		is_number_char(char e, int expected_base);
int		str_to_num(char *e, int base, int *set);
char	*num_to_str(int num, int base, char *set);

#endif
