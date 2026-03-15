#include<stdio.h>
#include<stdlib.h>//// for dynamic memory allocation -- malloc, free
#include<stdbool.h>// for boolean data type 

// Here we will implement a stack using the dynaminc memeory allocation

#define STACK_MAX 100

typedef struct {
    
    int *collections;
    int capacity;
    int top;
}stack;



stack *create_stack(int capicity);
void destroy_stack(stack *stack);
bool is_empty(stack *stack);
bool is_full(stack *stack);
stack push(stack *stack, int item);
stack pop(stack *stack);


int main(){

    stack *mystack = create_stack(10);
    push(mystack,5);
    push(mystack,10);
    push(mystack,15);
    for(int i=0; i<3;i++){
        printf("The value in the stack is %d\n",mystack->collections[i]);

    }

    stack s;

    s.collections = malloc(sizeof(int)*10);
    return 0;
}


stack *create_stack(int capacity){
    stack *s= malloc(sizeof(stack));
    s->capacity =capacity;
    s->top =-1;
    s->collections = malloc(sizeof(int)*capacity);
    return s;

}

bool is_empty(stack *stack){

    if (stack->top== -1){return true;}
    else {return false;}
}

bool is_full(stack *stack){

    if(stack->top== stack->capacity-1){return true;}
    else {return false;}
}

void destroy_stack(stack *stack){

    free(stack->collections);
    free(stack);

}

stack push(stack *stack, int item){
    if(is_full){
        printf("Stack Overflow\n");
    }
    stack->collections[stack->top]= item;
    stack->top = stack->top+1;
    return *stack;
}


stack pop(stack *stack){

    if(is_empty){
        printf("Stack Underflow\n");
    }
    stack->top=stack->top-1;
    return *stack;
}