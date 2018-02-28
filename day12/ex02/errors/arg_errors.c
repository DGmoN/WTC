#include "errors.h"

int	no_args_error()
{
	put_line("File name missing.");
	return (0);
}

int	wrong_arg_format()
{
	put_line("One of your arguments is wrongly formatted");
	return (0);
}