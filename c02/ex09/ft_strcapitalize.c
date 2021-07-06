char *ft_strcapitalize(char *str)
{
    str = tolower(str); //fonction
    str[0] = toupper(str[0]); // fonction
    int i;
    for (i = 0 ; i < strlen(str) ; i++)
    {
        if (str[i] == " ")
        {
            str[i+1] = toupper(str[i+1]);
        }
    }
    return str;
}

int main(void)
{
    char *ft_strcapitalize(char *str);
    return 0;
}