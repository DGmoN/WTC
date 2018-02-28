#include "errors.h"

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