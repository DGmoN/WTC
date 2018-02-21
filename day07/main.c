
#include <stdio.h>

char	**ft_split_whitespaces(char *str);
int		count_word(char *str);
unsigned	int	is_whitespace_char(char e);
int		main(int argn, char **args)
{
	char **words;
	
	int count = count_word("this  is\t\ta ling wordwqs\nasdasdasdasd");
	words = ft_split_whitespaces("this  is\t\ta ling wordwqs\nasdasdasdasd");
	int x = 0;
	while (x < count)
		printf("%s\n", words[x++]);
	
}