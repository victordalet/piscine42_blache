#include "ft_stock_str.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_puts(char *str)
{
	while (*str)
    {
        ft_putchar(*str++);
    }
	ft_putchar('\n');
}

void ft_putnbr(int nb)
{
	unsigned int n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
    {
		n = nb;
    }
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n %= 10;
	}
	ft_putchar(n + '0');
}

void ft_show_tab(struct s_stock_str *par)
{
	if (!par)
    {
		return ;
    }
	while (par->str)
	{
		ft_puts(par->str);
		ft_putnbr(par->size);
		ft_putchar('\n');
		ft_puts(par->copy);
		par++;
	}
}

int main()
{
    ft_show_tab(struct s_stock_str *par);
    return 0 ;
}