void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int pivot;
	int i;
	int j;

	if (size < 2)
		return ;
	pivot = tab[--size];
	i = 0;
	j = -1;
	while (++j < size)
		if (tab[j] < pivot)
			ft_swap(&tab[i++], &tab[j]);
	if (tab[i] > tab[size])
		ft_swap(&tab[i], &tab[size]);
	ft_sort_int_tab(tab, i);
	ft_sort_int_tab(tab + i + 1, size - i);
}
int main(void)
{
    void ft_sort_int_tab(int *tab, int size);
    return 0;
}