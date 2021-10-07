#include <stdio.h>
#include <stdlib.h>  
#include "pile.h"

int main()
{

	Stack sta = new_stack();

	if (is_empty_stack(sta))
		printf("la liste est vide");

	sta = push_stack(sta,14);
	sta = push_stack(sta,47);
	sta = push_stack(sta,23);
	sta = push_stack(sta,31);

	printf("Sommet actuel : %d\n", top_stack(sta));
	printf("Taille de la pile : %d\n",stack_lenght(sta));
	print_stack(sta);
	sta = pop_stack(sta);
	print_stack(sta);

	Stack clear_stack(sta);

	return 0;
}