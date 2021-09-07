     /* [liste chainé] */

/* DEFINITION D'UNE LISTE */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "liste.h"

int main(void)
{
    List mylist = new_list();
    if (is_empty_list(mylist))
        printf("la liste est vide \n");
    else
        printf("il y a des éléments dans la liste \n");
    print_list(mylist);

    mylist = push_back_list(mylist , 36);
    mylist = push_back_list(mylist , 54);
    mylist = push_back_list(mylist , 2);
    mylist = push_back_list(mylist , -2);
    mylist = push_back_list(mylist , 2);
    print_list(mylist);

    mylist = pop_front_list(mylist);
    mylist = pop_front_list(mylist);
    print_list(mylist);

    mylist = pop_back_list(mylist);
    print_list(mylist);

    mylist = push_back_list(mylist , 2);
    mylist = clear_list(mylist);
    print_list(mylist);

    return 0;
}