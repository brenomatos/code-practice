#ifndef STACK_CPP
#define STACK_CPP

#include <bits/stdc++.h>
#include "list.h"

list * init_list(){
  list *l = (list *) malloc (sizeof(list));
  l->size = 0;
  l->front = l->back = NULL;
  return l;
}

void add(list **l, int key){
  node *aux = (node*)malloc (sizeof(node));
  aux->key = key;
  if ((*l)->size == 0) {
    aux->next = aux->next = NULL;
    (*l)->back = aux;
    (*l)->back->key = key;
    (*l)->front = (*l)->back;
    (*l)->front->prev = (*l)->back->next = NULL;
  }
  else{
    aux->prev = (*l)->back;
    (*l)->back->next = aux;
    (*l)->back = (*l)->back->next;
    (*l)->back->next = NULL;
  }
  (*l)->size++;
}

int remove(list **l, int pos){
  (*l)->size--;
}

void print(list **l){
  node *aux = (*l)->front;
  while (aux!=NULL) {
    printf("%d\n",aux->key );
    aux = aux->next;
  }
  free(aux);
}

void print_reverse(list **l){
  node *aux = (*l)->back;
  while (aux!=NULL) {
    printf("%d\n",aux->key );
    aux = aux->prev;
  }
  free(aux);
}

void free_list(list **l){
  node *aux;
  while ((*l)->back!=NULL) {
    aux = (*l)->back;
    (*l)->back = (*l)->back->prev;
    free(aux->next);
  }
  free(aux);
}


#endif
