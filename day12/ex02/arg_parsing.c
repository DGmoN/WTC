#include "arg_parsing.h"
#include <stdlib.h>
#include "str_util.h"
t_arg_flag	create_flag(int expected_params, char *flag)
{
		t_arg_flag ret;
		
		ret.expected_params = expected_params;
		ret.param_data = malloc(sizeof(char*) * (expected_params + 1));
		ret.flag = flag;
		return (ret);
}

int get_flag_args_lim(t_arg_flag *flags, int flagc)
{
	int index;
	int sum;
	
	index = 0;
	sum = 0;
	while (index < flagc)
	{
		sum += flags[index].expected_params + 1;
		index++;
	}
	return (index);
}

char		**sanitize_args(int argc, char **args, t_arg_flag e)
{
	int		index;
	char	**ret;
	int		flag_index;
	int		src_index;
	
	ret = malloc(sizeof(args) * (e.expected_params+ 1));
	index = 0;
	src_index = 1;
	flag_index = 0;
	while (index < argc)
	{
		if (str_cmp(args[src_index], e.flag) == 0)
		{
			src_index += e.expected_params + 1;
			flag_index++;
		}
		ret[index] = args[src_index];
		index++;
		src_index++;
	}
	return (ret);
}
