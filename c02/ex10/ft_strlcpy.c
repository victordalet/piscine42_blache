unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int compteur;
    for (compteur = 0 ; compteur < size ; compteur++)
    {
        if (!((*src >= 'A' && *src <= 'Z') || (*src >= 'a' && *src <= 'z')))
        {
            dest += src[compteur];
        }
    }
}

int main(void)
{
    unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
    return 0;
}