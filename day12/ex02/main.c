/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 12:54:16 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/28 16:06:10 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_disp.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "args_util.h"
#include <stdlib.h>
#include "arg_parsing.h"
#include "errors/errors.h"

int buffer_overflow_error()
{
	put_line("Buffer overflow.");
	return (0);
}

void	clean(char *e, int len)
{
	int count;
	
	count = 0;
	while (count < len)
	{
		e[count] = 0;
		count++;
	}
}

void print_file(char *name, int buffer_size)
{
	int		file;
	char	*buffer;
	int		red;

	file = open(name, O_RDONLY);
	if (file == -1)
		return ;
	buffer = (char *)malloc(sizeof(char) * buffer_size);
	red = read(file, buffer, buffer_size);
	write(1, buffer, red);
	free(buffer);
}

int	main(int argc, char **args)
{
	int buffersize;
	t_arg_flag count_flag;
	int index;
	
	if (argc - 1 < 1)
		return (no_args_error());
	index = 1;
	count_flag = create_flag(1, "-c");
	populate_arg_flag(args, argc, &count_flag);
	if (!str_to_num(count_flag.param_data[0], 10, &buffersize))
		return (wrong_arg_format());
	while (index < argc)
	{
		
		print_file(args[index], buffersize);
		index++;
	}
	return (0);
}
