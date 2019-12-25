#ifndef BTREE_H
#define BTREE_H

#include <bits/stdc++.h>

typedef struct node{
  int key;
  node *l, *r;
}node;

typedef struct btree{
  node *head;
  int size;
}btree;

btree * init_tree();

void add_node(btree *bt, int key);
#endif
