#include <bits/stdc++.h>
#include "list.h"


int main(int argc, char const *argv[]) {
  int k;
  list *l = init_list();

  add(&l,2);
  add(&l,3);
  add(&l,4);
  add(&l,5);
  add(&l,6);
  add(&l,7);

  k = remove(&l,0);
  print(&l);
  k = remove(&l,1);
  print(&l);
  k = remove(&l,2);
  print(&l);
  k = remove(&l,2);
  print(&l);
  free_list(&l);
  free(l);
  return 0;
}
