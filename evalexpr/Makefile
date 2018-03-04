# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wgourley <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/26 08:39:19 by wgourley          #+#    #+#              #
#    Updated: 2018/03/01 11:35:02 by wgourley         ###   ########.fr        #
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
	@rm -Rf $(DLIB_DIR)
	@echo "Created lib dir"
	@cp -Rf $(SLIB_DIR) $(DLIB_DIR)
	@echo "coppied lib"
	$(GCC) -c $(shell find . -name "*.c") -Wall -Wextra -Werror
	@echo "Made Files:"
	@ls -la *.o
	@cp *.o .o/
	@rm *.o
	@gcc -o $(OUTPUT) $(OUTDIR)/*.o
	@echo "Program Created"

weak: $(SRC) $(OUTDIR)
	@rm -Rf $(DLIB_DIR)
	@echo "Created lib dir"
	@cp -Rf $(SLIB_DIR) $(DLIB_DIR)
	@echo "coppied lib"
	$(GCC) -c $(shell find . -name "*.c")
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
