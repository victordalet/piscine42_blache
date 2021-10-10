#include <stdio.h>
#include <stdlib.h>  
#include "tree.h"

Tree *new_tree(int x)
{
	Tree *tr = malloc(sizeof(*tr));

	if(tr == NULL)
	{
		fprintf(stderr, "Erreure d'allocution\n");
		exit(EXIT_FAILURE);
	}

	tr->value = x;
	tr->tleft = NULL;
	tr->tright = NULL;
	tr->parent = NULL;

	printf("Création de %d\n", tr->value);

	return tr;
}


/***************************************************/

void clean_tree(Tree *tr)
{
	if(tr == NULL)
		return;

	printf("Supprésion de %d\n",tr->value);

	clean_tree(tr->tleft);
	clean_tree(tr->tright);

	free(tr);
}


/***************************************************/


Tree *join_tree(Tree *left, Tree *right, Tree *node)
{
	Tree *tr = new_tree(node);

	tr->tleft = left;
	tr->tright = right;

	if (left != NULL)
		left->parent =tr;

	if (right != NULL)
		right->parent =tr;

	return tr;


}


/***************************************************/


void print_tree_prefix(Tree *tr)
{
	if(tr==NULL)
		return;

	if(tr->parent != NULL)
		printf("(%d) -> (%d) \n",tr->parent->value,tr->value);

	else
		printf("(%d) \n",tr->value);

	if(tr->tleft != NULL)
		print_tree_prefix(tr->tleft);

	if(tr->tright != NULL)
		print_tree_prefix(tr->tright);
}


/***************************************************/

int count_tree_nodes(Tree *node)
{
	if(tr == NULL)
		return 0;

	return (count_tree_nodes(tr->tleft) + count_tree_nodes(tr->tright) + 1);	
}

