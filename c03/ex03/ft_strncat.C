char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int tour = 0;
    while(nb && *src)
    {
        *src++;
        nb--;
        *dest += *src;
    }
    return *dest ;
}

int main(void)
{
    char *ft_strncat(char *dest, char *src, unsigned int nb);
    return 0;
}