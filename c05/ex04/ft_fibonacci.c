int ft_fibonacci(int index)
{
    int f0 = 0;
    int f1 = 0;
    int f2 = 0;
    int reste = 0;
    for (int i =0 ; i <= index ; i++)
    {
        f2 = f0+f1;
        if (f2 == 0)
        {
            f1 ++;
        }
        reste = f2;
        f2 = f0;
        f0 = f1;
        f1 = reste;
    }
    return f1;
}


int main(void)
{
    int index = 7;
    int nombre = ft_fibonacci(index);
    printf("%d",nombre);
    return 0 ;
}