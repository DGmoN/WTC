void    ft_sort_wordtab(char **tab);

#define size(e)	sizeof(e)/sizeof(e[0])

int main(int len, char **words)
{
	//ft_sort_wordtab(words);
	int i = len;
	while (i < len)
		printf("%s ",words[i++]);

	printf("real lenth: %i\n", len);
	printf("size of entry: %lu\nsize of arr: %lu\n", sizeof(char **), sizeof(words[0][0]));

	printf("%i", size(words));
}

