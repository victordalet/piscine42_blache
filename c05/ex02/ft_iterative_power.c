int ft_iterative_power(int nb, int power)
{
    int nombre_power = 1;
    for (int i = 0 ; i < power ; i++)
    {
        nombre_power *= nb ;
    }
    return nombre_power;
}



int main(void)
{
    int nb = 3;
    int power = 5;
    int nombre_power = ft_iterative_power(nb,power);
    printf("%d",nombre_power);
    return 0 ;
}
