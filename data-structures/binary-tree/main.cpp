#include <bits/stdc++.h>
#include "btree.h"


int main(int argc, char const *argv[]) {
  btree *b =  init_tree();
  printf("tam %d\n",b->size );
  
  free(b);
  return 0;
}
