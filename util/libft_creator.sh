# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wgourley <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/20 13:42:53 by wgourley          #+#    #+#              #
#    Updated: 2018/02/21 07:55:23 by wgourley         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
for file in *.c; do
	gcc -Wall -c  $file 
done
for file in *.o; do
	ar src "../../util/libft.a" $file
done
rm *.o
