#ifndef __PILE__H__
#define __PILE__H__


typedef enum 
{
	false,
	true
}Bool;

typedef struct QueueElement
{
	int value;
	struct QueueElement *next;
}QueueElement, *Queue;

static QueueElement *first = NULL;
static QueueElement *last = NULL;
static int nb_elements = 0;


Bool is_empty_queue(void);
int queue_lenght(void);
int queue_first(void);
int queue_last(void);
void print_queue(void);
void push_queue(int x);
void pop_queue(void);
void clear_queue(void);




#endif
