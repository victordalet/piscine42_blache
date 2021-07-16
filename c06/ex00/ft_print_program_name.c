int ft_print_program_name()
{
    write(1,__FILE__,50); //revoir pour les 50 caractères
}



int main(void)
{
    ft_print_program_name();
    return 0 ;
}