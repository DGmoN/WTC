/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_util.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:30:57 by wgourley          #+#    #+#             */
/*   Updated: 2018/03/01 11:31:27 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_UTIL_H
# define STR_UTIL_H

int		is_numeric(char *e);
int		is_char_in_str(char e, char *comp, int offset);
int		str_len(char *e);
int   str_cmp(char *a, char *b);
void  ft_putnbr(int numb);
void  ft_putchar(char e);
int 	find_first_of(char *e, char *b, int offset);

#endif
