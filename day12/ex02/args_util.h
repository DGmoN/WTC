/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_util.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 15:25:14 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/28 16:00:18 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARGS_UTIL_H
# define ARGS_UTIL_H


#include "str_util.h"

int		find_index_of_arg(char **args, int len, char *argtext);
int		parse_num_arg(int len, char **args, char *flag, int base);

#endif
