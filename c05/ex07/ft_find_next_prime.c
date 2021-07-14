int ft_find_next_prime(int nb)
{
    nb--;
    int nb_diviseur = 0;
    do
    {
        nb_diviseur = 0;
        nb++;
        for (int i = 1 ; i <= nb ; i++)
        {
            if (nb%i == 0)
            {
                nb_diviseur++;
            }
        }
    }
    while (nb_diviseur !=2);
    return nb;
}

int main(void)
{
    int nb = 4;
    int nombre = ft_find_next_prime(nb);
    printf("%d",nombre);
    return 0 ;
}
