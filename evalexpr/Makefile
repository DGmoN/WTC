# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wgourley <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/26 08:39:19 by wgourley          #+#    #+#              #
#    Updated: 2018/03/04 17:16:09 by wgourley         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = "gcc"
OUTPUT = "eval_expr"
SRCDIR = '.'
OUTDIR = ".o"
SLIB_DIR = "../util/lib_c/"
DLIB_DIR = "lib"
SRC = $(shell find . -name "*.c")

all: $(SRC) $(OUTDIR)
	$(GCC) -c $(shell find . -name "*.c") -Wall -Wextra -Werror
	@echo "Made Files:"
	@ls -la *.o
	@cp *.o .o/
	@rm *.o
	@gcc -o $(OUTPUT) $(OUTDIR)/*.o
	@echo "Program Created"

$(OUTDIR):
	mkdir -p $@
	@echo "Output decrectory made"

clean:
	@rm -Rf $(OUTDIR)
	@echo "Object directory cleared"

fclean: clean
	@rm -f $(OUTPUT)
	@echo "Exacutable scrubbed"

re: fclean all
