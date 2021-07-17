char *ft_strjoin(int size, char **strs, char *sep)
{
    if (size == 0)
    {
        return "";
    }
    else
    {
        char tableau[size*2];
        for (int i =0 ; i < size ; i+= 2)
        {
            tableau[i] = **strs;
            tableau[i+1] = *sep;
        }
        return tableau;
    }

}