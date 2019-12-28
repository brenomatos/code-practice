#include <bits/stdc++.h>
#include "btree.h"


int main(int argc, char const *argv[]) {
  node *tree = NULL;
  add_node(tree, 2);
  
  printf("%d\n", tree->key);
  return 0;
}
