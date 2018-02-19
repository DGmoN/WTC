#include <unistd.h>
#include <stdio.h>
#include "ex00/ft_strcpy.c"



void strcpy_test(){
	char *src = "shite";
	char dest[10];

	ft_strcpy(dest, src);
	printf("Src: %s\nDest: %s", src, dest);
}

int main(){
	strcpy_test();
}
