int *ft_range(int min, int max)
{
    if (min < max)
    {
        int interval = max -  min;
        int tableau[interval];
        for (int i = 0 ; i < interval ; i++)
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
    *ft_range(3, 10);
    return 0 ;
}