#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


/* a revoir car erreur + fonction printf non autorisé*/

void ft_putchar(char c)
{
	write(1, &c, 1);
}


void ft_print_base(char *base)
{
    if(*base == NULL)
	{
		printf("Rien a afficher, la Liste est vide.\n");//fonction non autorisé
		return;
	}

	while(*base != NULL)
	{
		printf("[%d] ", *base->value); //fonction non autorisé
		*base = *base->next;
	}
}

void fr_rajout_base(*base,n)
{
    ListElement *element;

	element = malloc(sizeof(*element));

	if(element == NULL)
	{
		fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
		exit(EXIT_FAILURE);
	}

	element->value = n;
	element->next = NULL;

	if(is_empty_list(*base))
		return element;

	ListElement *temp;
	temp = *base;

	while(temp->next != NULL)
		temp = temp->next;

	temp->next = element;
	ft_print_base(*base);
    return *base;
}


void ft_putnbr_base(int nbr , char *base)
{
    ft_print_base(char *base);

	unsigned int n;

	if (nbr < 0)
	{
		ft_putchar('-');
		n = -nbr;
	}
	else
		n = nbr;
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n %= 10;
	}
	r_rajout_base(*base,n);
}

int main(void)
{
    ft_putnbr_base(int nbr, char *base);
    return 0;
}