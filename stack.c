#include "lib.h"

void stack_init(stack *si) {
  stack *top;
  top=NULL;
  si->link=top;
}

void stack_push(stack *si, unsigned e) {
  stack *temp;
  temp = (stack *)malloc(sizeof(stack));
  temp->Data = e;
  temp->link = si->link;
  si->link = temp;
}

int stack_pop(stack *si) {
  stack *temp1;
  temp1=si->link;

  if (temp1!=NULL) {
    si->link = temp1->link;
    free(temp1);
    return temp1->Data;
  }
  else
    return -1;
  }

void stack_reset(stack *si) {
 while (si->link!=NULL){
    stack *temp;
    temp=si->link;
    si->link=temp->link;
    free(temp);
 }
}

void stack_print(stack *si) {
  stack *temp;
  temp=si->link;
  stack s;
  stack_init(&s);
  while(temp!=NULL) {
    stack_push(&s,temp->Data);
    temp=temp->link;
  }
  print(&s);
  stack_reset(&s);
}

void print(stack *s) {
  s=s->link;
  while(s!=NULL) {
    printf("%d ",s->Data);
    s=s->link;
  }
  printf("\n");
}

int stack_size(stack *si) {
 stack *temp;
 temp=si->link;
 int n=0;
 while(temp!=NULL) {
   n=n+1;
   temp=temp->link;
 }
return n;
}
