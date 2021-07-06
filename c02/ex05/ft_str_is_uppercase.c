int ft_str_is_uppercase(char *str)
{
  while(*str)
  {
    if (*str < 'A' || *str > 'Z')
    {
        return 0;
    }
    str++;
  }
  return 1 ;
}


int main(void)
{
    int ft_str_is_uppercase(char *str);
    return 0;
}