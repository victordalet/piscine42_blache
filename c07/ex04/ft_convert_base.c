int	ft_strlen(char *str)
{
	int n = 0;
	while (str[n])
		n++;
	return n;
}



char *ft_strstr(char *str, char *to_find)
{
	int i;
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 1;
			while (to_find[i] && str[i] == to_find[i])
				i++;
			if (!to_find[i])
				return (str);
		}
		str++;
	}
	return (0);
}


char supprimer_symbole(char nbr,char symbole)
{
    char new_nbr;
    char new_nbr2;
    int nombre_nombre = 0;
    int nombre_tour = ft_strlen(nbr);
    for (int i = 0 ; i < nombre_tour ; i++)
    {
        if (nbr[i] != symbole && nombre_nombre != 1 )
        {
            new_nbr[i] = nbr[i];
        }
        if (nbr[i] == symbole)
        {
            nombre_nombre = 1;
        }
        if (nbr[i] != symbole && nombre_nombre == 1 )
        {
            new_nbr2[i] = nbr[i];
        }
    }
    int nb1 = char new_nbr;
    int nb2 = char new_nbr2;
    if (symbole == "+")
    {
       int resultat = nb1 +nb2;
       return resultat;
    }
    else if (symbole == "-")
    {
        int resultat = nb1 - nb2;
        return resultat;
    }
}


char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int symbole_plus = *ft_strstr(*nbr,"+");
    int symbole_moins = *ft_strstr(*nbr,"-");
    if (symbole_plus != 0 )
    {
        char symbole = "+";
        *base_to = supprimer_symbole(*nbr,symbole);
    }
    else if (symbole_moins != 0 )
    {
        char symbole = "-";
        *base_to = supprimer_symbole(*nbr,symbole);
    }

}


int main()
{
    *ft_convert_base(char *nbr, char *base_from, char *base_to);
    return 0 ;
}