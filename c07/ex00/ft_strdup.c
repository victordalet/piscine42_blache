int	ft_strlen(char *str)
{
	int n = 0;
	while (str[n])
		n++;
	return (n);
}

char *ft_strcpy(char *dest, char *src)
{
	int i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char *ft_strdup(char *src)
{
	char dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	return (ft_strcpy(dest, src));
}


int main()
{
    *ft_strdup(char *src);
    return 0 ;
}