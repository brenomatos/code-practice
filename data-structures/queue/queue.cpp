#ifndef QUEUE_CPP
#define QUEUE_CPP

#include <bits/stdc++.h>
#include "queue.h"


queue * init_queue(){
  queue *q;
  q = (queue *) malloc (sizeof(queue));
  q->front = q->rear = NULL;
  q->size = 0;
  return q;
}


void enqueue(int key, queue *q){
  node *aux = (node *) malloc (sizeof(node));
  aux->key = key;
  if (q->size == 0) {
    q->rear = q->front = aux;
    q->rear->next = NULL;
  }
  q->rear->next = aux;
  q->rear = q->rear->next;
  q->size++;
}

node* dequeue(queue *q){
  if (!is_empty(q)) {
    node* aux;
    aux = q->front;
    q->front  = q->front->next;
    return aux;
  }
}

void print_queue(queue *q){
  node *printer = q->front;
  while (printer!=NULL) {
    std::cout << printer->key << std::endl;
    printer = printer->next;
  }
}

bool is_empty(queue *q){
  return q->size==0 ? true : false;
}
#endif
