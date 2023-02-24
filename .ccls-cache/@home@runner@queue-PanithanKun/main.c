#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"
#include "Queue.h"

int main(int argc , char **argv) {
  NodePtr headPtr=NULL;
   NodePtr tailPtr=NULL;

   Order q;
   q.headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;
  
   int i,x,n=1;
   

 for(i=1;i<argc;i++){
        int cash;
        if(strcmp(argv[i],"x")==0){
            x=dequeue_struct(&q,&n);
          if(x>0){
            printf("You have to Pay %d\n",x);
            do{
              printf("Cash:");
              scanf("%d",&cash);
            }while(cash<x);
            printf("Thank you\n");
            if(cash>x)
              {
                printf("Change is %d\n",cash-x);
              }
          }
        }
        else {
         enqueue_struct(&q,atoi(argv[i]),atoi(argv[i+1]));
          printf("My order is %d\n",atoi(argv[i]));
         i++;
        }
 }
  printf("========================================================\n");
  if(q.size!=0)
  {
    if(q.size==1)
    {
      printf("There is %d person left in the queue\n",q.size);
    }else if(q.size>1)
    {
     printf("There are %d people left in the queue\n",q.size);    
    }
  }else{
    printf("The Queue is Empty\n");
  }
  dequeue_All(&q);
  return 0;
}
