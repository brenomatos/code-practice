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
    (*s)->bottom = (*s)->top;
    (*s)->bottom->next = NULL;
  }
  else{
    node *aux = (node*)malloc(sizeof(node));
    aux->key = key;
    aux->next = (*s)->top;
    (*s)->top = aux;
  }
  (*s)->size++;
}

int pop(stack **s){
  int key;
  node *aux = (*s)->top;
  (*s)->top = (*s)->top->next;
  (*s)->size--;
  key = aux->key;
  free(aux);
  return key;
}

void print(stack **s){
  node *printer = (*s)->top;
  printf("%d\n",printer->key );
  printf("Printing Stack...\n");
  printf("Stack size: %d\n",(*s)->size );
  while (printer!=NULL) {
    printf("%d\n", printer->key);
    printer=printer->next;
  }
  printf("Printing over\n");
  free(printer);
}

void free_stack(stack **s){
  node *aux = (*s)->top;
  while (aux!=NULL) {
    free(aux);
    aux = aux->next;
  }
  free(aux);
}

#endif
