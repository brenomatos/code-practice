#ifndef STACK_H
#define STACK_H

#include <bits/stdc++.h>

typedef struct node{
  int key;
  node *next;
}node;

typedef struct stack{
  node *bottom, *top;
  int size;
}stack;

void init_stack(stack **s);
void push(stack **s, int key);
int pop(stack **s);
void print(stack **s);
void free_stack(stack **s);
#endif
