#ifndef BTREE_H
#define BTREE_H

#include <bits/stdc++.h>

typedef struct node{
  int key;
  node *l, *r;
}node;

void add_node(node **tree, int key);
bool search(node *tree, int key);
void pre_order(node *tree);
void in_order(node *tree);
void post_order(node *tree);

#endif
