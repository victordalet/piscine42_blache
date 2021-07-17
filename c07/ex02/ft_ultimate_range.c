int ft_ultimate_range(int **range, int min, int max)
{
    if (min < max)
    {
        int tableau[**range];
        for (int i = 0 ; i < **range ; i++)
        {
            tableau[i] = min;
            min++;
        }
        return tableau;
    }
    else
    {
        return 0;
    }
}


int main()
{
    ft_ultimate_range(7, 3, 10);
    return 0 ;
}