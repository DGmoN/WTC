#include <stdio.h>

char        **break_peeps(char *str, int words,char e);

int main()
{
	char *str = "Age|notage;AAGE|ntage";
	char **peeps = break_peeps(str, 2, '|');

	for(int i =0; i < 2; i++)
		printf("%s\n", peeps[i]);

}

