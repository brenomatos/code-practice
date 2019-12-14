#include <bits/stdc++.h>
#include "queue.h"
// using namespace std;

  void print(int x){
    std::cout << x << std::endl;
  }
int main(int argc, char const *argv[]) {
  queue *q;
  node *aux;
  q = init_queue();
  enqueue(2,q);
  enqueue(3,q);
  enqueue(4,q);

  print_queue(q);
  enqueue(5,q);
  enqueue(6,q);

  aux = dequeue(q);

  print_queue(q);
  std::cout << "esta vazia sim ou nao "<<is_empty(q) << std::endl;
  free(q);
  free(aux);
  return 0;
}
