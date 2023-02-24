#define P1 100
#define P2 20
#define P3 50



typedef struct Queue{
	 NodePtr headPtr,tailPtr;
  int size;
}Order;


void enqueue_struct(Order* q, int Order ,int Qty){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
     new_node->Order_No = Order;
     new_node->Qty=Qty;
  new_node->nextPtr =NULL;
  if(q->headPtr==NULL){
    q->headPtr=new_node;
    }else{
   q->tailPtr->nextPtr=new_node;
    }
    q->tailPtr=new_node;
  q->size++;
 }
}


int dequeue_struct(Order *q,int *N){
   NodePtr t=q->headPtr;
    int price;
    printf("Customer No:%d\n",*N);
    (*N)=(*N)+1;
   if(q->size>0){
    switch(t->Order_No){
      case 1: printf("Ramen\n");
      price = P1*(t->Qty);
      break;
      case 2: printf("Somtum\n");
      price = P2*(t->Qty);
      break;
      case 3: printf("Fried Chicken\n");
      price = P3*(t->Qty);
      break;
      default: printf("No Food\n");
      break;
     }
   // int value= t->data;
    q->headPtr=q->headPtr->nextPtr;
     if(!(q->headPtr))
     {
       q->tailPtr=NULL;
         free(t);
     }
     q->size--;
     if(t->Order_No>=1 && t->Order_No<=3)
     {
      return price;
     }
   return 0;
 }
}
void dequeue_All(Order *q){
  while(q->headPtr!=NULL){
   NodePtr t=q->headPtr;
    //int value= t->data;
    if(q->size>0)
    {
    q->headPtr=q->headPtr->nextPtr;
     if(!(q->headPtr))
     {
       q->tailPtr=NULL;
         free(t);
     }
     q->size--;
   }
    }
  }

