#include <unistd.h>

void putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_combn(int n)
{
    int vmax = 10;
    int i;
    for (i = 0 ; i<n-1 ; i++)
    {
        vmax *= 10;
    }
    int compteur;
    for (compteur = 0 ; compteur < vmax ; compteur++)
    {
        printf("%d",compteur); //fonction non autorisé il me semble 
        putchar(" ");
    }
}

int main(void)
{
    ft_print_combn(3);
    return 0;
}