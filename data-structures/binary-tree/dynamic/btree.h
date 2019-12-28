#ifndef BTREE_H
#define BTREE_H

#include <bits/stdc++.h>

typedef struct node{
  int key;
  node *l, *r;
}node;

void add_node(node *tree, int key);
#endif
