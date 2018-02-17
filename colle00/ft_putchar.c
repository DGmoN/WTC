#include <unistd.h>

void ft_putchar(char e);

void ft_putchar(char e)
{
	write(1, &e, 1);
}