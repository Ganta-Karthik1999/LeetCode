#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


struct Node{
  
  int data;
  struct Node *next;
  
  };
  
  
struct Node* CreateNode(int value){
  
  struct Node *node = malloc(sizeof(struct Node));
  
  if (node == NULL) return NULL;
  
  node->data = value;
  node->next = NULL;
  return node;
  
  }
  
  
void insert_node(struct Node **head, int value){
    struct Node *Newnode = CreateNode(value);
    
    if(Newnode == NULL) return;
    
    Newnode->next = *head;
    
    *head = Newnode; 
  
  
  }

  
void insert_tail(struct Node **head,int value){
  
  struct Node *new_node = CreateNode(value);
  if (new_node == NULL) return ;

  if (*head == NULL){ 
    
    *head = new_node;
    
    return;
    }
  
  struct Node *ptr = *head;
  
  while(ptr->next != NULL){
    ptr = ptr->next;
    }
    
    ptr->next = new_node;
  
  
  }
  
  
  void reverselist(struct Node **head){
    if(*head == NULL)return;
    struct Node *prev= NULL;
    struct Node *next= NULL;
    struct Node *present = *head;
    while(present != NULL){
      
      next = present->next;
      present->next  = prev;
      prev = present;
      present = next;
    
      }
    
    *head = prev;
    
    }


void print_list(struct Node **head){
  if(*head == NULL) {printf("empty Linked list !!\n"); return;}
  struct Node* ptr = *head;
  int i =0; 
  while(ptr!= NULL){
    
    printf("The value at location %d is: %d \n", i, ptr->data);
    ptr = ptr->next;
    
    i++;
    
    }
  
  }
  
  
void free_list(struct Node **head){
    if(head == NULL) {printf("empty Linked list !!\n"); return;}
    struct Node* ptr = *head;
    struct Node* temp = NULL;
    int i =0; 
    while(ptr != NULL){
      temp = ptr->next;
      free(ptr);
      ptr= temp;
      
      }
      
    *head = NULL;
  
  
  }  




int main() {
  
  struct Node *head = NULL;
  insert_node(&head,10);
  insert_tail(&head,20);
  insert_tail(&head,30);
  insert_tail(&head,40);
  
  reverselist(&head);
  
  print_list(&head);
  free_list(&head);
  print_list(&head);
  
  
  return 0;
}