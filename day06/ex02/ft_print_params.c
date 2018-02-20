void	ft_putstr(char *str);
void	ft_putchar(char e);

int	main(int argc, char **argv)
{
	int c;

	c = 0;
	while (c < argc)
	{
		ft_putstr(argv[c]);
		ft_putchar('\n');
		c++;
	}
	return (0);
}
