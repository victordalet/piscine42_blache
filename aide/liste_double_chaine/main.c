#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "list.h"


int main(void)
{
	Dlist mylist = new_dlist();
	print_dlist(mylist);
	printf("la taille de la liste est : %d\n", dlist_lenght(mylist));
	mylist = push_back_dlist(mylist,14);
	mylist = push_back_dlist(mylist,6);
	mylist = push_back_dlist(mylist,-5);
	mylist = push_front_dlist(mylist,56);
	print_dlist(mylist);
	printf("\n la taille de la liste est : %d\n", dlist_lenght(mylist));
	mylist = pop_front_dlist(mylist);
	print_dlist(mylist);
	printf("\n la taille de la liste est : %d\n", dlist_lenght(mylist));
	mylist = push_front_dlist(mylist,56);
	mylist = clear_dlist(mylist);
	print_dlist(mylist);
	printf("\n la taille de la liste est : %d\n", dlist_lenght(mylist));
	return 0 ;
}
