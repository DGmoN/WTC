
#include <stdio.h>

char	**ft_split(char *str, char *delims);

int		main(int argn, char **args)
{
	char  **h = ft_split("thisnisna-word-n!", "n-");
	printf("~%s", "Thisnisna-word-n!\n"); 
	int x = 0;
	while (h[x]){
		printf("%s\n", h[x]);
		x++;
	}
}
