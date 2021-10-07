#include <stdio.h>
#include <stdlib.h> 
#include "pile.h"


Stack new_stack()
{
	return NULL; 
}

/*******************************************************/

Bool is_empty_stack(Stack st)
{
	if (st == NULL)
	{
		return true;
	}
	return false;
}

/*******************************************************/

Stack push_stack(Stack st, int x)
{
	StackElement *element;

	element = malloc(sizeof(*element));

	if (element == NULL)
	{
		fprintf(stderr,"Problème allocution dynamique");
		exit(EXIT_FAILURE);
	}

	element -> value = x;
	element -> next = st;

	return element;
}

/*******************************************************/

Stack clear_stack(Stack st)
{
	while(!is_empty_stack(st))
		st = pop_stack(st);


	return new_stack();

}


/*******************************************************/

void print_stack(Stack st)
{
	if (is_empty_stack(st))
	{
		printf("Rien a afficher, la Pile est vide.\n");
		return;
	}

	while(!is_empty_stack(st))
	{
		printf("[%d]\n",st->value);
		st = st->next;
	}

}


/*******************************************************/

Stack pop_stack(Stack st)
{
	StackElement *element;

	if(is_empty_stack(st))
		return new_stack();

	element = st->next;
	free(st);

	return element;
}


/*******************************************************/

int top_stack(Stack st)
{
	if(is_empty_stack(st))
	{
		printf("Aucun sommet, la Pile est vide.");
		return -1;
	}

	return st->value;
}


/*******************************************************/

int stack_lenght(Stack st)
{
	int lenght;

	while(!is_empty_stack(st))
	{
		lenght++;
		st = st->next;
	}

	return lenght;
}