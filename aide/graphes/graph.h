#ifdef __GRAPH__H__
#define __GRAPH__H__

/******** DEFINITION BOOLEEN ********/
typedef enum 
{
	false,
	true
}Bool;


/********* DEFINITION D'UN NOEUD (SOMMET) ********/
typedef struct NodeListElement
{
	int value;
	struct NodeListElement *next;

}NodeListElement, *NodeList;


/******** DEFINITION D'UNE LISTE D'ADJACENT ********/
typedef struct AdjencyListElement
{
	NodeListElement *begin;

}AdjencyListElement, *AdjencyList;


/******** DEFENITION D'UN GRAPHE ********/
typedef struct GraphElement
{
	Bool is_oriented;
	int nb_vertices;
	AdjencyList tab_neighbours;

}GraphElement, *Graph;


/******** PROTOTYPES ********/
Graph new_graph(int vertices, Bool is_oriented);
Bool is_empty_graph(Graph g);
NodeList add_node(int x);
void add_edge(Graph g, int src, int dest);
void print_graph(Graph g);
void erase_graph(Graph g);

#endif