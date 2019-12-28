#ifndef BTREE_CPP
#define BTREE_CPP

#include <bits/stdc++.h>
#include "btree.h"

void add_node(node **tree, int key){
  if (*tree == NULL) {
    *tree = (node*) malloc (sizeof(node));
    (*tree)->key = key;
    (*tree)->l = NULL;
    (*tree)->r = NULL;
    return;
  }
  else if (key < (*tree)->key) {
    add_node(&(*tree)->l, key);
  }
  else if (key > (*tree)->key) {
    add_node(&(*tree)->r, key);
  }
}

bool search(node *tree, int key){
  if (tree->key == key) {
    return true;
  }
  else if (key > tree->key) {
    return search(tree->r, key);
  }
  else if (key > tree->key) {
    return search(tree->l, key);
  }
  else return false;
}
#endif