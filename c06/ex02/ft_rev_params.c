void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	main(int argc, char **argv)
{
	while (argc > 1)
	{
		ft_putstr(argv[--argc]);
		ft_putchar('\n');
	}
	return (0);
}