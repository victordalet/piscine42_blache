char *ft_strcpy(char *dest, char *src)
{
    int i = -1;
    while (src[++i])
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';

    dest = src;
    return dest;
}



int main(void)
{
    char *ft_strcpy(char *dest, char *src);
    return 0;
}

