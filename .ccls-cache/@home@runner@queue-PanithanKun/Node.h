//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#ifndef Node_h
#define Node_h

struct node
{
    int Order_No;
    int Qty;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;


/*void enqueue(NodePtr * head, NodePtr* tail, int O,int Q){
  Node* new_node=(NodePtr) malloc(sizeof(Node));
if(new_node){ 
     new_node->Order_No = O;
    new_node->Qty = Q;
  new_node->nextPtr =NULL;
  if(*head==NULL){
    *head=new_node;
    }else{
   (*tail)->nextPtr=new_node;
    }
    *tail=new_node;
 }
}


int dequeue(NodePtr* head, NodePtr* tail){
   NodePtr t=*head;
   if(t){
   int value= t->data;
    *head=(*head)->nextPtr;
     if(!(*head))
     {
       *tail=NULL;
     }
     free(t);
   return value;
   }
   printf("Empty queue");
   return 0;
}

*/

#endif
