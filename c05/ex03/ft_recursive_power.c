int ft_recursive_power(int nb, int power)
{
    int nombre_power = 1;
    int tour = nb;
    while (nb != 0)
    {
        nombre_power *= nb;
        tour--;
    }
    return nombre_power;
}



int main(void)
{
    int nb = 3;
    int power = 5;
    int nombre_power = ft_recursive_power(nb,power);
    printf("%d",nombre_power);
    return 0 ;
}