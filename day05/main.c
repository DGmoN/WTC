#include <unistd.h>
#include <stdio.h>
#include "ex13/ft_strcat.c"

int main(){
	char *str1 = "Hey fucker!";
	char *str2 = malloc(50);
	str2 = "Bitch, ";
	printf("~%s\n", str2);
	ft_strcat(str2, str1);
	printf("%s\n", str1); 
	printf("%s\n", str2);
}
