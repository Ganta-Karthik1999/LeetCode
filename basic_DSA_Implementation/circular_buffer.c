#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAX 5

struct queue{
  int data[MAX];
  int head;
  int tail;
  int count;
  
  };
  
  
void queue_init(struct queue *q){
  
  q->count= 0;
  q->head = 0;
  q->tail = 0;
  
  }
  
  
bool is_full(struct queue *q){
  
  if(q->count == MAX)return true;
  return false;
  }
  
bool is_empty(struct queue *q){
  
  if(q->count == 0)return true;
  return false;
  }
  
  
bool enqueue(struct queue* q,int value){
  
  if(is_full(q) == true) return false;
  
  q->data[q->tail]=value;
  q->tail = (q->tail + 1) % MAX;
  q->count =q->count + 1;
  
  return true;
  
  
  }
  
  
bool dequeue(struct queue* q,int *value){
  
  if(is_empty(q) == true) return false;
  
  *value = q->data[q->head];
  q->head  = (q->head + 1) % MAX;
  q->count = q->count- 1;
  return true;
  
  
  }
  
  
  
  
int main() {

  struct queue q;
  int value;
  queue_init(&q);
  
  enqueue(&q,10);
  enqueue(&q,20);
  enqueue(&q,30);
  enqueue(&q,40);
  enqueue(&q,50);
  
  dequeue(&q,&value);
  enqueue(&q,60);  
  enqueue(&q,70);  

  return 0;
}