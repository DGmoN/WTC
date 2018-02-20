#include <unistd.h>
#include <stdio.h>
#include "ex08/ft_str_is_alpha.c"

int main(){
	char *str1 = "alphabetical";
	char *str2 = "notalpha1234";

	printf("%i\n", ft_str_is_alpha(str1));
	printf("%i\n", ft_str_is_alpha(str2));
}
