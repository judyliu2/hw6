#include <stdio.h>
#include <stdlib.h>

#include "headers.h"

int main(){
 
  struct node *test= (struct node*) malloc (sizeof(struct node));


  test->i = 12;
  struct node *test2= (struct node*) malloc (sizeof(struct node));
  test2->i = 13;
  test->next = test2;

  printf("Testing print_list:\n");
  print_list(test);

  struct node *p = insert_front(test, 3);
  print_list(p);

  struct node *f = free_list(p);

  print_list(f);

  return 0;
}
