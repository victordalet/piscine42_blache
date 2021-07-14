int ft_sqrt(int nb)
{
    int resultat = 0;
    while (resultat != nb)
    {
        if (resultat > nb)
        {
            return 0;
        }
        if (resultat*resultat == nb)
        {
            return resultat;
        }
        else
        {
            resultat++;
        }
    }
}

int main(void)
{
    int nb = 7;
    int nombre = ft_sqrt(nb);
    printf("%d",nombre);
    return 0 ;
}