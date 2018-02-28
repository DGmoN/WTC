/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 12:54:16 by wgourley          #+#    #+#             */
/*   Updated: 2018/02/28 15:17:51 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_disp.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
# define BUFFER_SIZE 4086

int	no_args_error()
{
	put_line("File name missing.");
	return (0);
}

int	nothing_read_error(char *filename)
{
	put_str("Nothing read from file: ");
	put_line(filename);
	return (0);
}

int buffer_overflow_error()
{
	put_line("Too many arguments.");
	return (0);
}

int	file_not_found_error()
{
	put_line("Cannot find the file.");
	return (0);
}

int	file_close_error()
{
	put_line("Failed to close file");
	return (0);
}

int	main(int argc, char **args)
{
	int file;
	char buffer[BUFFER_SIZE];
	int bytes_read;
	int index;

	if (argc - 1 < 1)
		return (no_args_error());
	index = 0;
	bytes_read = 0;
	while (index < argc -1)
	{
		file = open(args[index + 1], O_RDONLY);
		if (file == -1)
			return (file_not_found_error());
		bytes_read = read(file, buffer, BUFFER_SIZE);
		if (bytes_read >= BUFFER_SIZE)
		   return buffer_overflow_error();
		if (bytes_read == 0)
			return (nothing_read_error(args[1]));
		write(1, buffer, butes_read);
		if (close(file) == -1)
			return (file_close_error());
		index++;
	}
	return (0);
}
