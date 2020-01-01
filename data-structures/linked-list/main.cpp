#include <bits/stdc++.h>
#include "list.h"


int main(int argc, char const *argv[]) {
  list *l = init_list();

  add(&l,2);
  printf("%d\n",l->back->key );
  add(&l,3);
  printf("%d\n",l->back->key );
  add(&l,4);
  printf("%d\n",l->back->key );

  free(l);
  return 0;
}
