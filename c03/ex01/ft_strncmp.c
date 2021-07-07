int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    while(n && *s1 == *s2)
    {
        n++;
        s1++;
        s2++;
    }
    return (n , *s1 - *s2);
}

int main(void)
{
    int ft_strncmp(char *s1, char *s2, unsigned int n);
    return 0;
}