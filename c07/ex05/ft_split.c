int	ft_strlen(char *str)
{
	int n = 0;
	while (str[n])
		n++;
	return n;
}

char **ft_split(char *str, char *charset)
{
    int size = ft_strlen(*str);
    if (size == 0)
    {
        return "";
    }
    else
    {
        char tableau[(size*2)+1];
        for (int i =0 ; i < size ; i+= 2)
        {
            tableau[i] = *str;
            tableau[i+1] = *charset;
        }
        tableau[(size*2)+1] = 0;
        return tableau;
    }
}



int main()
{
    **ft_split(char *str, char *charset);
    return 0 ;
}
