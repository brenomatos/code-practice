#ifndef STACK_H
#define STACK_H

#include <bits/stdc++.h>

typedef struct node{
  int key;
  node *next, *prev;
}node;

typedef struct list{
  node *front, *back;
  int size;
}list;

list * init_list();
void add(list **l, int key);
int remove(list **l, int pos);
void print(list **l);
void free_list(list **l);
void print_reverse(list **l);
#endif
