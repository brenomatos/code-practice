#include <bits/stdc++.h>
#include "stack.h"


int main(int argc, char const *argv[]) {
  stack *s = NULL;
  init_stack(&s);
  push(&s,2);
  push(&s,4);
  push(&s,5);
  node *aux = s->top;
  printf("%d\n", aux->key);
  aux = aux->next;
  printf("%d\n", aux->key);
  aux = aux->next;
  
  free(s);
  return 0;
}
