#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

Graph new_graph(int vertices, Bool is_oriented)
{
	GraphElement *element;
	element = malloc(sizeof(*element));

	if (element == NULL)
	{
		printf("Erreur : Probleme creation Graphe \n");
		exit(EXIT_FAILURE);
	}

	element->is_oriented = is_oriented;
	el->nb_vertices = vertices;

	element->tab_neighbours = malloc(vertices * sizeof(AdjencyListElement));

	if (element->tab_neighbours	== NULL)
	{
		printf("Erreur : Probleme creation Graphe \n");
		exit(EXIT_FAILURE);		
	}

	for (int i = 1 ; i < element-> nb_vertices+1 ; i++)
	{
		element->tab_neighbours[i-1].begin = NULL;
	}
	return element;
}


/*********************************************************/


Bool is_empty_graph(Grap g)
{
	if (g == NULL)
		return true;
	return false;
}


/*********************************************************/


NodeList add_node(int x)
{
	NodeList n = malloc(sizeof(NodeListElement));

	if (n == NULL)
	{
		printf("Erreur : Probleme creation Graphe \n");
		exit(EXIT_FAILURE);
	}

	n->value = x;
	n->next = NULL;

	return n;


/*********************************************************/

void erase_graph(Grap g)
{
	if(is_empty_graph(g))
	{
		printf("Rien a effacer, le graphe n'existe pas \n");
		return;
	}

	//si sommet adjacents
	if (g->tab_neighbours)
	{
		for (int i = 1 ; i < g->nb_vertices+1 ; i++)
		{
			NodeList n = g->tab_neighbours[i-1].begin;
			
			while (n != NULL)
			{
				NodeList tmp = n;
				n = n->next;
				free(tmp);
			}
		}

	//LIBERATION DE LA LISTE D'ADJACENCE
		free(g->tab_neighbours);	
	}
	//LIBERATION DU GRAPHE
	free(g);
}

/*********************************************************/


void add_edge(Grap g, int src, int dest)
{

	NodeList n = add_node(dest);
	n->next =  g->tab_neighbours[src-1].begin;
	g->tab_neighbours[src-1].begin = n;

	if(!g->is_oriented)
	{
		n = add_node(src);
		n->next =  g->tab_neighbours[dest-1].begin;
		g->tab_neighbours[dest-1].begin = n;		
	}

}


/*********************************************************/


void print_graph(Graph g)
{
	for (int i = 0 ; i < g->nb_vertices + 1 ; i++)
	{
		NodeList n = g->tab_neighbours[i-1].begin;
		printf("(%d) : ",i);

		while(n != NULL)
		{
			printf("%d", n -> value);
			n = n->next;
		} 
		printf("NULL \n"); 
	}
}