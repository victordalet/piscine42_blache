void ft_rev_int_tab(int *tab, int size)
{
    int i;
    for (i = 0 ; i < size ; i++)
    {
        tab[i] = tab[-i-1];
    }

}


int main(void)
{
    void ft_rev_int_tab(int *tab, int size);
    return 0;
}
