/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 16:03:14 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/22 18:11:32 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		pm;
	char	*am_pm[3];
	int		time;

	am_pm[0] = "A.M.";
	am_pm[1] = "P.M.";
	pm = hour % 24;
	time = (pm - (12 * (pm / 12)));
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (pm == 0 || pm == 24)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else if (pm == 12)
		printf("12.00 P.M. AND 1.00 P.M.\n");
	else if (pm == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (pm == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	else
		printf("%i.00 %s AND %i.00 %s\n", time, (char *)am_pm[(pm / 12)],
			time + 1, (char *)am_pm[(pm / 12)]);
}
