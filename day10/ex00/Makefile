# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wgourley <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/26 08:39:19 by wgourley          #+#    #+#              #
#    Updated: 2018/02/26 11:24:21 by wgourley         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = "gcc"
OUTPUT = "libft.a"
SRCDIR = '.'
OUTDIR = ".o"
SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
 
mk: $(SRC) $(OUTDIR)
	$(GCC) -c $(SRC)
	@echo "Made Files:"
	@ls -la *.o
	@cp *.o .o/
	@rm *.o
	@ar rc $(OUTPUT) $(OUTDIR)/*.o
	@echo "Librairy compiled"	

$(OUTDIR):
	mkdir -p $@	
	@echo "Output decrectory made"

clean: 
	@rm -Rf .o
	@echo "Object directory cleared";

fclean: CLEAN
	@rm -f libft.a
	@echo "Librairy removed"

re: FCLEAN MK
