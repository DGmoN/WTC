#include "lib/mr_math/mr_math.h"
#include "lib/strs/strs.h"
#include "lib/str_split/str_split.h"

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return 0;
}
