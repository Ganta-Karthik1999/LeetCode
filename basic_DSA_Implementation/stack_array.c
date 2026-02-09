#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define Capacity 5

struct stack{
  
  int data[Capacity];
  int top;
  
  };
  
  

void init(struct stack *s){
  s->top = -1 ;
  }
  
  
  
bool is_full(struct stack *s){
  if(s->top == Capacity -1) return true;
  return false;
  }
  
  
bool is_empty(struct stack *s){
  if(s->top == -1) return true;
  return false;
  }
  


bool push(struct stack *s, int value){
  if(is_full(s) == true) return false;
  s->top = s->top +1;  
  s->data[s->top] = value;

  return true;
  
  }
  
  
  
bool pop(struct stack *s, int *out){
  if(is_empty(s) == true) return false;
  *out = s->data[s->top];  
  s->top = s->top -1;
  return true;
  
  }
  
  
  
  
  

int main() {

  struct stack s;
  int out;
  init(&s);
  push(&s,10);
  pop(&s,&out);


  return 0;
}



