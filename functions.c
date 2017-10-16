#include <stdio.h>
#include <stdlib.h>


struct node {
  int i;
  struct node *next;
};

void print_list(struct node* pointer){
  printf("[");
  while(pointer->next != NULL){ //will continue printing until theres no next value
    printf("%d ", pointer->i); 
    pointer = pointer->next; //moves to next pointer
    }
   printf("]\n");
    return;
  }

struct node * insert_front(struct node *front, int a){
  struct node *newfront = (struct node*) malloc (sizeof(struct node*));
  newfront->next = front; // newfront points to front
  newfront->i = a; // int for newfront
  return newfront;
}

struct node * free_list(struct node *pointer){
  
  while(pointer->next!=NULL){
    free(pointer);
    pointer = pointer->next;
  }
  free(pointer);
  return pointer;
}
