#include <stdio.h>

unsigned    int ft_collatz_conjecture(unsigned int base);

int main(int q, char **e)
{
	int i = ft_collatz_conjecture(12);
	printf("%i", i);
}
