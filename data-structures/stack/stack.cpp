#ifndef STACK_CPP
#define STACK_CPP

#include <bits/stdc++.h>
#include "stack.h"

void init_stack(stack **s){
  (*s) = (stack *) malloc(sizeof(stack));
  (*s)->size = 0;
  (*s)->bottom = (*s)->top = NULL;
}


void push(stack **s, int key){
  if ((*s)->size == 0) {
    (*s)->top = (node *) malloc (sizeof(node));
    (*s)->top->key = key;
    // (*s)->bottom = (*s)->top;
  }
  else{
    node *aux = (node*)malloc(sizeof(node));
    aux->key = key;
    aux->next = (*s)->top;
    (*s)->top = aux;
  }
  (*s)->size++;

}

#endif
