#include<stdio.h>
#include<stdlib.h>

struct Node{
  
  int data;
  struct Node *next;
  
  };



struct Node* Create_node(int data){
  
  struct Node *ptr = malloc(sizeof(struct Node));
  
  ptr->data = data;
  ptr->next= NULL;
  
  return ptr;
  
  
  }


struct Node * add_from_back(struct Node *Node,int data){
  
  struct Node *ptr = malloc(sizeof(struct Node));
  ptr->data = data;
  struct Node *p = Node; 
  
  while(p->next != NULL){
    
    p = p->next;
    
    }
    
  p->next = ptr;
  ptr->next = NULL;
  
  return Node;
  
  
  }
  
  
void Traversal(struct Node * Node){
  // struct Node *p = Node;
  
  int i = 0;
  while(Node!= NULL){
    Node->data;
    printf("The value at the i : %d is %d\n",i,Node->data);    
    Node = Node->next;

    i++;
    
    }
  
  }
  
  
struct Node *deletefirst(struct Node * head){
  
  struct Node * ptr = head;
  head = head->next;
  free(ptr);
  
  return head;
  
  
  }


struct Node *deleteindex(struct Node * Node, int index){
    struct Node *p = Node;
    struct Node *q = Node->next;

    for(int i=0 ; i<index-1;i++){
      
      p = p->next;
      q = q->next;
      
      }  
      
    p->next = q->next;
    free(q);
    
    return Node;
    
  
  }



struct Node *deleteEnd(struct Node* Node){
  struct Node *p = Node;
  struct Node *q = Node->next;
  
  while(q->next != NULL){
    
    p=p->next;
    q=q->next;
    
    }
    
    p->next = NULL;
    free(q);
    
  return Node;
  
  
  }


int main() {

  struct Node * Node =Create_node(10); 
  add_from_back(Node,20);
  add_from_back(Node,30);
  add_from_back(Node,40);
  Traversal(Node);
  
  // Node = deletefirst(Node);
  // Node = deleteindex(Node,2);
  
  Node = deleteEnd(Node);



  return 0;
}