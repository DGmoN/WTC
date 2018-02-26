# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wgourley <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/26 08:39:19 by wgourley          #+#    #+#              #
#    Updated: 2018/02/26 15:16:40 by wgourley         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = "gcc"
OUTPUT = "do-op"
SRCDIR = '.'
SRC = $(shell find $(SRCDIR) -name "*.c")
OSRC = $(shell find . -name "*.o")

all: $(clean) $(SRC)
	$(GCC) -c $(SRC) -Wall -Wextra -Werror
	$(GCC) -o $(OUTPUT) "*.o" -Wall -Wextra -Werror

clean:
	@echo "Scrubbing .o files"
	@find . -name "*.o" -delete -print

fclean: clean
	@rm -f $(OUTPUT)

re: fclean all
