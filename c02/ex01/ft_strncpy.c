char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int compteur;
    for (compteur = 0 ; compteur < n ; compteur++)
    {
        dest += src[compteur];
    }
}


int main(void)
{
    char *ft_strncpy(char *dest, char *src, unsigned int n);
    return 0;
}