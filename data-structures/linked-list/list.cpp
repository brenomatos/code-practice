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
  if ((*l)->size == 0) {
    (*l)->back = (node *) malloc (sizeof(node));
    (*l)->back->key = key;
    (*l)->front = (*l)->back;
  }
  else{
    node *aux = (node*) malloc (sizeof(node));
    aux->key = key;
    aux->prev = (*l)->back;
    (*l)->back->next = aux;
    (*l)->back = (*l)->back->next;
  }
  (*l)->size++;
}

int remove(list **l, int pos){
  (*l)->size--;
}

void print(list **l){

}

void free_list(list **l){

}
#endif
