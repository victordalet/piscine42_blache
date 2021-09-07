#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
	
	/* definition d'un booléen*/
	typedef enum 
	{
		false,
		true
	}Bool;

	/* definition d'un maillon de la dlist*/
	typedef struct DlistNode
	{
		int value;
		struct DlistNode *back;
		struct DlistNode *next;
	}DlistNode;

	/*definition d'une des lists*/
	typedef struct Dlist
	{
		int lenght;
		struct DlistNode *begin
		struct DlistNode *end;
	}*Dlist;

	/*prototypes*/
	Dlist new_dlist(void);
	Bool is_empty_dlist(Dlist li);
	int dlist_lenght(DList li);
	int dlist_first(DList li);
	int dlist_last(DList li);
	void print_dlist(Dlist li);
	Dlist push_back_dlist(Dlist li, int x);
	Dlist push_front_dlist(Dlist li, int x);
	Dlist pop_back_dlist(Dlist li);
	Dlist pop_front_dlist(Dlist li);
	Dlist clear_dlist(Dlist li);


#endif