void	ft_putchar(char c);
void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	int count;

	count = 0;
	while (count < argc)
	{
		ft_putstr(argv[argc-count-1]);
		ft_putchar('\n');
		count++;
	}
	return (0);
}
