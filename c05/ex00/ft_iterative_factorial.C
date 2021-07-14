int ft_iterative_factorial(int nb)
{
    int nombre_factoriel = 1;
    for (int i = 1 ; i <= nb ; i++)
    {
        nombre_factoriel*= i;
    }
    return nombre_factoriel;
}



int main(void)
{
    int nb = 3;
    int nombre_factoriel = ft_iterative_factorial(nb);
    printf("%d",nombre_factoriel);
    return 0 ;
}