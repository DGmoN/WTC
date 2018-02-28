# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wgourley <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/26 08:39:19 by wgourley          #+#    #+#              #
#    Updated: 2018/02/28 14:28:25 by wgourley         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = "gcc"
OUTPUT = "ft_display_file"
SRCDIR = '.'
OUTDIR = ".o"
SRC = $(shell find . -name "*.c")
 
all: $(SRC) $(OUTDIR)
	$(GCC) -c $(SRC) -Wall -Wextra -Werror
	@echo "Made Files:"
	@ls -la *.o
	@cp *.o .o/
	@rm *.o
	@gcc -o $(OUTPUT) $(OUTDIR)/*.o
	@echo "Program"	

$(OUTDIR):
	mkdir -p $@	
	@echo "Output decrectory made"

clean: 
	@rm -Rf $(OUTDIR)
	@echo "Object directory cleared"

fclean: clean
	@rm -f $(OUTPUT)
	@echo "Librairy removed"

re: fclean all
