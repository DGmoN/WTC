
#include "num_arr.h"

int	get_num_index(int *arr, int e, int len)
{
	int index;

	index = 0;
	while (index < len)
	{
		if (arr[index] == e)
			return (index);
		index++;
	}
	return (-1);
}
