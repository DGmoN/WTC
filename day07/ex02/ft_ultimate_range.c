#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		delta;
	int		*ints;
	int		index;
	
	delta = max - min;
	*range = NULL;
	if (delta <= 0)
		return 0;
	index = 0;
	ints = (int *)malloc(delta * sizeof(int));
	
	while (index < delta)
	{
		ints[index] = index + delta;
		index++;
	}
	*range = ints;
	return delta;
}