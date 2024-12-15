#define TEST_MESSAGE "Added by 202011995 안수경\n"
#ifndef STACK_H
#define STACK_H
#include <stdbool.h> 

typedef int Item;
typedef struct stack {
Item * contents;
int top;
int size;
} Stack;

Stack * create_stack(int initial_size);
void make_empty(Stack *s);
bool is_empty(Stack *s);
bool is_full(Stack *s);
void push(Stack *s, Item i);
Item pop(Stack *s);
Item peek(Stack *s);
static void stack_underflow(void);
static void reallocate(Stack * stack);
#endif