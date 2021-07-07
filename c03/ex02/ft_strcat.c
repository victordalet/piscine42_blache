char *ft_strcat(char *dest, char *src)
{
    while(*dest && *dest == *src)
    {
        *dest++;
        *dest++;
    }
    *dest += (*dest - *src);
    return *dest
}

int main(void)
{
    char *ft_strcat(char *dest, char *src);
    return 0;
}
