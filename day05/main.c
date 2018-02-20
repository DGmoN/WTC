#include <unistd.h>
#include <stdio.h>
#include "ex10/ft_str_is_lowercase.c"

int main(){
	char *str1 = "ASDFGHlKL";
	char *str2 = "asdfghjkl";

	printf("%i\n", ft_str_is_lowercase(str1));
	printf("%i\n", ft_str_is_lowercase(str2));
}
