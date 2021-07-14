int ft_is_prime(int nb)
{
    int nb_diviseur = 0;
    for (int i = 1 ; i <= nb ; i++)
    {
        if (nb%i == 0)
        {
            nb_diviseur++;
        }
    }
    if (nb_diviseur == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int nb = 7;
    int nombre = ft_is_prime(nb);
    printf("%d",nombre);
    return 0 ;
}