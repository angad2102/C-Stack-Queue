#include "lib.h"

void queue_init(queue *q) {
  node *a,*b;
  a=NULL;b=NULL;
  q->front=a;
  q->rear=b;
}

void queue_enqueue(queue *q, unsigned e) {
  node *temp;
  temp = (struct node*)malloc(sizeof(struct node));
  temp->link=NULL;
  temp->Data=e;
  if(q->rear==NULL) {
    q->front=temp;
    q->rear=temp;
  }
  else {
    q->rear->link=temp;
    q->rear=temp;
  }
}

int queue_dequeue(queue *q) {
  node *temp;
  temp=q->front;
  if(q->front==NULL) {
    q-> front = q->rear= NULL;
    return -1;
  }
  else {
    q->front=q->front->link;
    free(temp);
    if(q->front==NULL) {
      q->rear=NULL;
    }
    return temp->Data;
  }
}

int queue_size(queue *q) {
  node *temp;
  temp=q->front;
  int count=0;
  while(temp) {
    temp=temp->link;
    count++;
  }
  return count;
}

void queue_reset(queue *q) {
  node *temp;
  node *a;
  temp=q->front;
  a=temp;
  while(temp!=NULL) {
    a=temp;
    temp=temp->link;
    free(a);
  }
  q->front=NULL;
  q->rear=NULL;
}

void queue_print(queue *q) {
  node *temp;
  temp=q->front;
  while(temp) {
    printf("%d ",temp->Data);
    temp=temp->link;
  }
  printf("\n");
}
