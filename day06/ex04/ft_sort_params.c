#include <stdio.h>
void	ft_putchar(char e);
void	ft_putstr(char *str);
int	ft_strcmp(char *str1, char *str2);
unsigned	int	strsum(char *str);

unsigned	int	strsum(char *str)
{
	int c;
	unsigned	int total;

	if (str[0] == 0)
		return (0);

	c = 0;
	total = 0;
	while (str[c] != 0)
	{
		total += str[c];
		c++;
	}

	return (total);
}

char	*getLower(char **str2, int len, char *low)
{
	unsigned	int lowest;
	unsigned	int last_test;
	unsigned	int last_lowest_test;
	char *lowestStr;
	int count;

	lowestStr = low;
	lowest = strsum(lowestStr);
	count = 0;
	last_lowest_test = 9999999;

	while (count < len)
	{
		last_test = strsum(str2[count]);
		if (last_test < last_lowest_test && lowest < last_test)
		{
			last_lowest_test = last_test;
			lowestStr = str2[count];
		}
		count++;
	}
	return (lowestStr);
}

int	main(int argc, char **argv)
{
	int index;
	char **lowest;
	char *last;

	if (argc <= 1)
	{
		ft_putstr("Please supply arguments\n");
		return (-1);
	}
		
	lowest = argv + 1;
	index = 1;
	last = "\0";

	while (index < argc)
	{
		last = getLower(lowest, argc -1, last);
		ft_putstr(last);
		ft_putchar('\n');
		index++;
	}
	return (0);
}
