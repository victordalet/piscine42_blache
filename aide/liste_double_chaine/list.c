#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "list.h"

Dlist new_dlist(void)
{
	return NULL;
}

/*--------------------------------------------------*/

Bool is_empty_dlist(Dlist li)
{
	if (li == NULL)
		return true;
	return false;
}

/*--------------------------------------------------*/

void message_erreur()
{
	printf("erreur : probleme allocation dynamique" );
	exit(EXIT_FAILURE);
}

/*--------------------------------------------------*/

int dlist_lenght(Dlist li)
{
	if(is_empty_dlist(li))
		return 0;
	return li->lenght;
}

/*--------------------------------------------------*/

int dlist_first(Dlist li)
{
	if(is_empty_dlist(li))
		exit(1);
	return li->begin->value;
}

/*--------------------------------------------------*/

int dlist_last(Dlist li)
{
	if(is_empty_dlist(li))
		exit(1);
	return li->end->value;
}


/*--------------------------------------------------*/

void print_dlist(Dlist li)
{
	if (is_empty_dlist(li))
	{
		printf("la liste est vide\n");
		return;
	}
	DlistNode *temp = li->begin;

	while(temp != NULL)
	{
		printf("%d\n",temp->value );
		temp = temp->next;
	}
}

/*--------------------------------------------------*/

Dlist push_back_dlist(Dlist li, int x)
{
	DlistNode *element;
	element = malloc(sizeof(*element));
	if(element == NULL)
	{
		void message_erreur();
	}

	element->value = x;
	element -> next = NULL;
	element -> back = NULL;

	if(is_empty_dlist(li))
	{
		li = malloc(sizeof(*li));
		if (li == NULL)
		{
			void message_erreur();
		}

		li->lenght = 0;
		li->begin = element;
		li -> end = element;
	}
	else
	{
		li->end->next = element;
		element->back = li->end;
		li->end = element;
	}

	li->lenght++;
	return li;
}

/*--------------------------------------------------*/

Dlist push_front_dlist(Dlist li, int x)
{
	DlistNode *element;
	element = malloc(sizeof(*element));
	if(element == NULL)
	{
		void message_erreur();
	}

	element->value = x;
	element -> next = NULL;
	element -> back = NULL;

	if(is_empty_dlist(li))
	{
		li = malloc(sizeof(*li));
		if (li == NULL)
		{
			void message_erreur();

		}
		li->lenght = 0;
		li->begin = element;
		li -> end = element;
	}
	else
	{
		li->begin->back = element;
		element->next = li->end;
		li->begin = element;
	}

	li->lenght++;
	return li;
}

/*--------------------------------------------------*/

Dlist pop_back_dlist(Dlist li)
{
	if (is_empty_dlist(li))
	{
		printf("rien a supprimer la liste est deja vide");
		return new_dlist();
	}

	if(li->begin == li->end)
	{
		free(li);
		li = NULL;
		return new_dlist();
	}

	DlistNode *temp = li->end;
	li-> end = li->end->back;
	li->end->next = NULL;
	temp->next = NULL;
	temp->back = NULL;

	free(temp);
	temp = NULL;

	li->lenght--;

	return li;
}

/*--------------------------------------------------*/

Dlist pop_front_dlist(Dlist li)
{
	if (is_empty_dlist(li))
	{
		printf("rien a supprimer la liste est deja vide");
		return new_dlist();
	}

	if(li->begin == li->end)
	{
		free(li);
		li = NULL;
		return new_dlist();
	}

	DlistNode *temp = li->begin;
	li-> begin = li->begin->next;
	li->begin->back = NULL;
	temp->next = NULL;
	temp->back = NULL;

	free(temp);
	temp = NULL;

	li->lenght--;

	return li;
}

/*--------------------------------------------------*/

Dlist clear_dlist(Dlist li)
{
	while(!is_empty_dlist(li))
	{
		li = pop_front_dlist(li);
	}
	return new_dlist();
}
