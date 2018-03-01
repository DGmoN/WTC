#include <unistd.h>
#include "../nums/nums.h"

void ft_putchar(char e)
{
  write(1, &e, 1);
}

void ft_putstr(char *e)
{
  int index;

  index = 0;
  while (e[index])
    ft_putchar(e[index++]);
}

void ft_putnbr(int num)
{
  int index;
	int len;
	int ch;
	int holder;
	int pow;

	len = digits_in_num(num, 10);
	index = 0;
	holder = num;
	while (index < len)
	{
		if (holder < 0)
		{
			ft_putchar('-');
			holder *= -1;
			index = 0;
		}
		pow = power(10, (len - index - 1));
		ch = holder / pow;
		holder = holder % pow;
    ft_putchar(ch + '0');
		index++;
  }
}
