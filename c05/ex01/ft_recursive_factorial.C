int ft_recursive_factorial(int nb)
{
    int nombre_factoriel = 1;
    int tour = 1;
    while (nb != 0)
    {
        nombre_factoriel *= tour;
        nb--;
        tour ++;
    }
    return nombre_factoriel;
}



int main(void)
{
    int nb = 3;
    int nombre_factoriel = ft_recursive_factorial(nb);
    printf("%d",nombre_factoriel);
    return 0 ;
}
