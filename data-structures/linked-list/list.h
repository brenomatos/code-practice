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


#endif
