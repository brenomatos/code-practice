#ifndef QUEUE_H
#define QUEUE_H

#include <bits/stdc++.h>

typedef struct node{
  int key;
  node* next;
}node;


typedef struct queue{
  node *front, *rear;
  int size;
}queue;

queue * init_queue();

void enqueue(int key, queue *q);

node*  dequeue(queue *q);

void print_queue(queue *q);

bool is_empty(queue *q);

#endif
