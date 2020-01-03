#include <bits/stdc++.h>
#include "stack.h"


int main(int argc, char const *argv[]) {
  int k;
  stack *s = NULL;
  init_stack(&s);
  std::cout << "its empty " << is_empty(&s) << std::endl;
  push(&s,2);
  push(&s,4);
  push(&s,5);
  node *aux = s->top;
  printf("%d\n", aux->key);
  aux = aux->next;
  printf("%d\n", aux->key);
  aux = aux->next;
  printf("%d\n", aux->key);
  k = pop(&s);
  printf("%d %d\n",k,s->size );
  k = pop(&s);
  printf("%d %d\n",k,s->size );
  k = pop(&s);
  printf("%d %d\n",k,s->size );
  push(&s,67);
  push(&s,37);


  std::cout << "its empty " << is_empty(&s) << std::endl;
  k = pop(&s);
  printf("%d %d\n",k,s->size );
  k = pop(&s);
  printf("%d %d\n",k,s->size );
  free_stack(&s);
  free(s);
  return 0;
}
