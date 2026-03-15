#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define STACK_MAX 100

typedef struct{
    int *collections;
    int capacity;
    int top;

}stack;


stack *create_stack(int capacity);
bool is_empty(stack *stack);
bool is_full(stack *stack);
bool push(stack *stack,int item);
bool pop(stack *stack);
void deconstruct_stack(stack *stack);


int main(){
  
  stack *mystack = create_stack(5);
  
  push(mystack,1);
  push(mystack,2);
  push(mystack,3);
  push(mystack,4);
  push(mystack,5);
  
  pop(mystack);
  pop(mystack);
  pop(mystack);
  pop(mystack);
  pop(mystack);
  pop(mystack);

  deconstruct_stack(mystack);
  
  return 0;
  
  }



void deconstruct_stack(stack *stack){
    free(stack->collections);
    free(stack);
}



stack *create_stack(int capacity){
  
  stack *s = malloc(sizeof(stack));
  if(capacity == 0 ){ printf("trying to create a empty stack");}
  (*s).capacity = capacity;
  (*s).top = 0;
  (*s).collections= malloc(capacity*sizeof(int));
  return s;
  
  }
  
  

bool is_empty(stack *stack){
  
  if(stack->top == 0){ return true;}
  else{return false;}
  
  }
  

bool is_full(stack *stack){
  
  if(stack->top == stack->capacity){return true;}

  else{return false;}  
}
  
  
bool push(stack *stack, int item){

  if(is_full(stack)){return false;}
    
  (*stack).collections[(*stack).top] =item;
  (*stack).top = (*stack).top + 1;
  
  }
  
bool pop(stack *stack){
  
  if(is_empty(stack)){return false;}
  (*stack).top = (*stack).top -1;
  printf("poped the value %d\n",(*stack).collections[(*stack).top]);
  
  
  }