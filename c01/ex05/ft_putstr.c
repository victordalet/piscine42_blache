void ft_putstr(char *str)
{
    int  i;
    int len = strlen(str);
    for (i = 0 ; i< len  ; i++)
    {
        write(1,str[i],1);
    }
}

int main(void)
{
    void ft_putstr(*str);
    return 0;
}
