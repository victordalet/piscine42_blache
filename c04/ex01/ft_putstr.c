void ft_putstr(char *str)
{
    int nombre;
    for (nombre = 0; nombre < *str ; nombre++)
    {
        write(1,*str,nombre);
    }
}


int main(void)
{
    void ft_putstr(char *str);
    return 0;
}