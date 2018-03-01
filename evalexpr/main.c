#include "lib/mr_math/mr_math.h"
#include "lib/strs/strs.h"
#include "lib/str_split/str_split.h"

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		int end;
		int start;
		start = 0;
		
		int index = 0;
		while (index < wordc)
		{
			ft_putstr(words[index]);
			ft_putchar('\n');
			index++;
		}
		ft_putnbr(count_symbols(av[1]));
		ft_putchar('\n');
	}
	return 0;
}
