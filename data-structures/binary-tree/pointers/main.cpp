#include <bits/stdc++.h>
#include "btree.h"


int main(int argc, char const *argv[]) {
  node *tree =  NULL;
  add_node(&tree, 4);
  add_node(&tree, 5);
  add_node(&tree, 3);
  // search(tree, 4);
  printf("%d\n", search(tree, 2));
  add_node(&tree, 6);
  add_node(&tree, 2);
  printf("%d\n", search(tree, 0));
  printf("%d\n", search(tree, 4));
  printf("%d\n", search(tree, 5));
  printf("%d\n", search(tree, 6));


  in_order(tree);
  pre_order(tree);
  post_order(tree);
  free_btree(tree);
  return 0;
}
