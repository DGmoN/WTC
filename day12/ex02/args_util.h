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
#include "arg_parsing.h"

int	populate_arg_flag(char **args, int len, t_arg_flag *flag);
int	is_flag(char *e);

#endif
