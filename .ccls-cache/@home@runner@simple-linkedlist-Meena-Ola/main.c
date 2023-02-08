//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
  int c=5;
  struct node d,*head ;
  typedef struct node NODE;
  typedef NODE* NodePtr;
  NodePtr p=(NodePtr)malloc(sizeof(NODE));
  head=p;
  p->value = c;
  for(int i=0,n=4;i<n;i++) {
    p->next=(NodePtr)malloc(sizeof(NODE));
    p=p->next;
    p->value=c+i+1;
    p->next=NULL;
  }
//  p->next=(NodePtr)malloc(sizeof(NODE));
//  p->next->value=head->value+3;
  printf("%d\n", head->value ); //what value for 5
  printf("%d\n", head->next->value ); //what value for 8
  
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
*/
//  p->next->next=(NodePtr)malloc(sizeof(NODE));
//  p->next->next->value=head->next->value+3;
//  p->next->next->next=NULL;
  printf("%d\n", head->next->next->value);
    
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
/*  struct node z;
  head=&z;
  z.value=2;
  z.next=p;
  head=&z;
  printf("%d -> %d -> %d -> %d -> NULL\n",head->value, head->next->value,head->next->next->value,head->next->next->next->value);
*/  
  typedef struct node* NodePtr;
  NodePtr tmp=head; //add temp value to faciliate
  /*  Exercise III Use loop to print everything*/
  int i,n=5;
  for(i=0,n=4;i<n;i++) {
    printf("%3d->", tmp->value);
    // What is missing???
    tmp=tmp->next;
  }
  printf(" NULL\n");
    
/*  Exercise IV change to while loop!! (you can use NULL to help)*/
  tmp=head;
  while(tmp!=NULL){
    printf("%3d->", tmp->value);
    // What is missing???
    tmp=tmp->next;
  }
  printf(" NULL\n");
    
/*  Exercise V Use malloc to create all nodes, instead of create a struct!!
        //use a loop to help
        See the top!
*/

/*  Exercise VI Free all node !!
         //use a loop to help
          
*/
  tmp=head;
  while(tmp!=NULL){
    printf("deleting %d\n",tmp->value);
    p=tmp->next;
    free(tmp);
    //Can't use tmp on the right-hand side of the '=' anymore
    tmp=p;
  } 
    return 0;
}
