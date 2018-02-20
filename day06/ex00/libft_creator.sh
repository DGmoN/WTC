# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wgourley <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/20 13:42:53 by wgourley          #+#    #+#              #
#    Updated: 2018/02/20 17:14:42 by wgourley         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
for file in *.c; do
	gcc -Wall -c  $file 
done
for file in *.o; do
<<<<<<< HEAD
	ar src $file "libft"
=======
	ar src $file
>>>>>>> 9122d558c5726f72ddb16ddaef04ac9fff0a7376
done
rm *.o
