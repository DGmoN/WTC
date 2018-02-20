#include <unistd.h>

#include "ex05/ft_strcapitalize.c"

void putnbr(int e);
void put_char(char e);
void putstr(char *str);

void put_char(char e){
	write(1, &e, 1);
}

void putstr(char *str){
	int c = 0;
	while (str[c] != 0)
	{
		put_char(str[c]);
		c++;
	}
}

void putnbr(int e){
	int t = e;
	int c = 0;
	int num = 0;
	
	if (t==0)
		return;
	
	num = t % 10;
	t = t / 10;
	
	putnbr(t);
	
	put_char(num + 48);
	c++;
	
}

void test()
{
	//putstr("Source string: ");
	char *str = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	int len = str_len(str);
	//putstr(str);
	//put_char('\n');
	//putstr("Source length: ");
	//putnbr(len);
	//putstr("\n");
	char *pico = ft_struppercase(str);
	putstr(pico);
	putstr("\n");
}

int main(){
	//strcpy_test();
	test();
}
