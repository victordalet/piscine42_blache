#include <stdio.h>
#include <stdlib.h>  
#include "queu.h"

Bool is_empty_queue(void)
{
	if (first == NULL && last == NULL)
		return true;
	return false;
}

/*****************************************************/

int queue_lenght(void)
{
	return nb_elements;
}


/*****************************************************/

int queue_first(void)
{
	if (is_empy_queue())
		exit(1);

	return first->value;
}

/*****************************************************/

int queue_last(void)
{
	if (is_empy_queue())
		exit(1);

	return last->value;
}

/*****************************************************/

void print_queue(void)
{
	if (is_empy_queue())
	{
		printf("Rien a afficher la liste est vide");
		return;
	}

	QueueElement *temp = first;

	while(temp != NULL)
	{
		printf("[%d]",temp->value);
		temp = temp->next;
	}
	printf("\n");
}

/*****************************************************/

void push_queue(int x)
{
	QueueElement *element;

	element = malloc(sizeof(*element));

	if (element == NULL)
	{
		fprintf(stderr, "%s Erreur  : Problème d'allocution dynamique \n");
		exit(EXIT_FAILURE);
	}

	element->value = x;
	element->next = NULL;


	if (is_empy_queue())
	{
		first = element;
		last = element;
	}

	else
	{
		last->next = element;
		last = element;
	}

	nb_elements++;
}


/*****************************************************/

void pop_queue(void)
{
	if(is_empy_queue())
	{
		printf("Rien a retirer la liste est déjà vide\n");
		return;
	}

	QueueElement *temp = first;

	if(first == last)
	{
		first = NULL;
		last == NULL;
	}

	else
	{
		first = first->next;
	}

	free(temp);
	nb_elements--;
}



/*****************************************************/


void clear_queue(void)
{
	if(is_empy_queue())
	{
		printf("Rien à nettoyer, la liste est déjà vide \n");
		return;
	}

	while(!is_empy_queue())
	{
		pop_queue();
	}
}