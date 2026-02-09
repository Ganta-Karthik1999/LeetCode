#include<stdio.h>
#include<stdlib.h>

struct Node{
  
  int data;  
  struct Node * next;  

  };



void print_list(struct Node * ptr){
  
  while(ptr !=  NULL){
    
    ptr->data;
    printf("The data in the linkded list: %d\n",ptr->data);
    ptr=ptr->next;
    
    }
  
  }


struct Node * insertAtFirst(struct Node *head, int data){
  
  struct Node *ptr = malloc(sizeof(struct Node));
  ptr->data  = data;
  ptr->next = head;
  
  return ptr;
  
  }


struct Node *inbetween(struct Node * head, int data, int index){
  
  struct Node *ptr = malloc(sizeof(struct Node));
  ptr->data = data;
  struct Node *p;
  p = head;
  int i =0;
  
  while(i!=index-1){
    
    p = p->next;
    i++;
    
    }
    
    ptr->next = p->next;
    p-> next = ptr;
    
    return head;
  
  }




struct Node* insertEnd(struct Node * head, int data){
  
  struct Node* ptr = malloc(sizeof(struct Node));
  struct Node* p ;
  p = head;
  ptr-> data = data;
  
  while(p->next != NULL){
    
    p = p->next;
    
    }
  
  p->next = ptr;
  ptr->next = NULL;
  return head;
  
  }
int main() {
  
  struct Node *head = malloc(sizeof(struct Node));
  struct Node *second = malloc(sizeof(struct Node));
  struct Node *third = malloc(sizeof(struct Node));
  struct Node *fourth = malloc(sizeof(struct Node));
  
   if (!head || !second || !third) {
        printf("malloc failed\n");
        free(head); free(second); free(third);
        return 1;
    }
  
  (*head).data= 1;
  (*head).next = second;
  
  (*second).data = 2;
  (*second).next = third;
  
  (*third).data = 3;
  (*third).next = fourth;
  
  (*fourth).data = 4;
  (*fourth).next = NULL;

/*
@param head : pointer to the first node of the linked list
@return : void function which prints the linked list
@brief : Function to print the linked list
*/

  print_list(head);
  // //head =insertAtFirst(head,56);
  
  // printf("================================================\n");
  // //print_list(head);
  // inbetween(head,23,1);
  // print_list(head);
  head=insertEnd(head,32);
  printf("=================================================\n");
  print_list(head);
  
  return 0;
}