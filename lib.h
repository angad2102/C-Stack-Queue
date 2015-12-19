#ifndef FOO_H_   /* Include guard */
#define FOO_H_

#include <stdio.h>
#include <stdlib.h>
struct stack
{
 int Data;
 struct stack *link;
};
typedef struct stack stack;
struct node
{
 int Data;
 struct node *link;
};
typedef struct node node;
struct queue
{
  node *front;
  node *rear;
};
typedef struct queue queue;

void stack_init(stack *si);
void stack_push(stack *si, unsigned e);
int stack_pop(stack *si);
void stack_reset(stack *si);
void stack_print(stack *si);
int stack_size(stack *si);
void queue_init(queue *q);
void queue_enqueue(queue *q, unsigned e);
int queue_dequeue(queue *q);
int queue_size(queue *q);
void queue_reset(queue *q);
void queue_print(queue *q);
void print(stack *s);

#endif // FOO_H_
