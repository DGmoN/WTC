#include <stdlib.h>

int		gg_strlen(char *str)
{
	int index;
	index = 0;
	while (str[index] != 0)
		index++;
	return (index);
}

char	*cat_str_dlim(char *base, char *attach, char delim)
{
	int		len1;
	int		len2;
	int		total;
	int		count;
	char	*ret;
	
	len1 = gg_strlen(base);
	len2 = gg_strlen(attach);
	total = len1 + len2 + 1;
	ret = (char *)malloc(sizeof(ret) * (total + 1));
	count = 0;
	while (count < total)
	{
		if (count < len1)
			ret[count] = base[count];
		else if (count > len1)
			ret[count] = attach[(count - len1) -1 ];
		else
			ret[count] = delim;
		count++;
	}
	ret[count] = 0;
	return (ret);
}

char	*ft_concat_params(int argc, char **args)
{
	int 	index;
	char	*ret;
	
	ret = args[0];
	index = 1;
	while (index < argc)
	{
		ret = cat_str_dlim(ret, args[index], '\n');
		index++;
	}
	return (ret);
}