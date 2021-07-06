int ft_str_is_printable(char *str)
{
  while(*str)
  {
    if (*str < ' ' || *str == 127) 
    {
        return 0;
    }
    str++;
  }
  return 1 ;
}

int main(void)
{
    int ft_str_is_printable(char *str);
    return 0;
}
