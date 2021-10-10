#ifndef __PILE__H__
#define __PILE__H__

typedef enum 
{
	false,
	true
}Bool;

typedef struct StackElement
{
	unsigned int value;
	struct StackElement *next;
}StackElement, *Stack;



Stack new_stack(void);
Bool is_empty_stack(Stack st);
void print_stack(Stack st);
Stack push_stack(Stack st, int x);
Stack pop_stack(Stack st);
int top_stack(Stack st);
int stack_lenght(Stack st);
Stack clear_stack(Stack st);



#endif
