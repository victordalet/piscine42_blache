int	ft_atoi(char *str)
{
	int n;
	int negative;

	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	negative = 0;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			negative = 1 - negative;
	n = 0;
	while (*str >= '0' && *str <= '9')
		n = n * 10 + *str++ - '0';
	if (negative)
		n *= -1;
	return (n);
}

int main(void)
{
    int ft_atoi(char *str);
    return 0;
}