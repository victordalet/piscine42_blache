#include <stdio.h>
#include <stdlib.h>  
#include "queue.h"

int main()
{
	push_queue(14);
	push_queue(26);
	push_queue(173);
	printf("Taille de la file : %d\n", queue_lenght());
	print_queue();
	clear_queue();

	return 0;
}