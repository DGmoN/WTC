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


int	main(int argc, char **args)
{
	int file;
	int buffersize;
	t_arg_flag count_flag;
	char *buffer;
	int index;
	
	if (argc - 1 < 1)
		return (no_args_error());
	index = 0;
	count_flag = create_flag(1, "-c");
	populate_arg_flag(args, argc, &count_flag);
	if (!str_to_num(count_flag.param_data[0], 10, &buffersize))
		return (wrong_arg_format());
	put_number(buffersize, 10);
	buffer = (char *)malloc(sizeof(char) * buffersize);
	while (index < argc - 1)
	{
		file = open(args[index + 1], O_RDONLY);
		if (file)
		{
			read(file, buffer, buffersize);
			write(1, buffer, buffersize);
		}
		index++;
	}
	return (0);
}
