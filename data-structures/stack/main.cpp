#include <bits/stdc++.h>
#include "stack.h"


int main(int argc, char const *argv[]) {
  int k;
  stack *s = NULL;
  init_stack(&s);
  push(&s,2);
  push(&s,4);
  push(&s,5);
  print(&s);
  
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
  free(s);
  return 0;
}
