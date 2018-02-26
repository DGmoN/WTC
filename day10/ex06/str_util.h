/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_util.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:30:57 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/26 15:10:29 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_UTIL_H
# define STR_UTIL_H

int		is_numeric(char *e);
int		is_char_in_str(char e, char *comp);
int		str_to_num(char *e, int base);
int		str_len(char *e);

#endif
