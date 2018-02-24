/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 04:04:02 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/23 05:54:27 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H

# define FT_DOOR_H
# define OPEN 1
# define CLOSE 0
# define TRUE 1
# define FALSE 0
# define EXIT_SUCCESS 0

typedef	int	t_ft_bool;

typedef	struct	s_t_door
{
	t_ft_bool state;
}				t_door;

void			ft_putstr(char *str);
t_ft_bool		close_door(t_door *door);
t_ft_bool		is_door_open(t_door *door);
t_ft_bool		is_door_close(t_door*door);
t_ft_bool		open_door(t_door *door);
#endif
