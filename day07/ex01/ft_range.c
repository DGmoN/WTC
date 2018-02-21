#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int 	delta;
	int		index;
	int		*ret;
	
	delta = max - min;
	index = 0;
	if(delta <= 0)
		return NULL;
	ret = (int *)malloc(sizeof(int) * delta);
	while (index < delta)
	{
		ret[index] = min + index;
		index++;
	}
	return ret;
}