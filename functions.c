
struct node {
  int i;
  struct node *next;
}

  void print_list(struct node* pointer){
    while(pointer++){
      printf("%d", pointer.i);
    }
  }

struct node * insert_front(struct node *, int);
struct node * free_list(struch node *);
