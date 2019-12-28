#include <bits/stdc++.h>


using namespace std;

int* init_tree(int value, int size){
  int *tree = (int *) malloc (sizeof(int) * size);
  for (int i = 0; i < size; i++) {
    tree[i] = value;
  }
  return tree;
}

void add_node(int *tree, int key, int index){
  if (tree[index] == -1) {
    tree[index] = key;
    return;
  }
  else if (key < tree[index]) {
    add_node(tree, key, 2*index + 1);
  }
  else if(key > tree[index]) {
    add_node(tree, key, 2*index + 2);
  }
  else if (key == tree[index]) {
    return;
  }
}

bool search_node(int * tree, int node_key, int index){
  if (tree[index] == node_key) {
    return true;
  }
  else if (node_key < tree[index] && tree[index]!=-1) {
    search_node(tree, node_key, 2*index + 1);
  }
  else if(node_key > tree[index] && tree[index]!=-1) {
    search_node(tree, node_key, 2*index + 2);
  }
  else return false;
}

int main(int argc, char const *argv[]) {
  int size = 100000;
  int *tree, value=-1;
  tree = init_tree(value, size);

  add_node(tree, 10, 0);
  add_node(tree, 5, 0);
  add_node(tree, 4, 0);
  add_node(tree, 2, 0);
  add_node(tree, 3, 0);
  add_node(tree, 1, 0);
  add_node(tree, 11, 0);
  add_node(tree, 6, 0);

  for (int i = 0; i < 30; i++) {
    cout << tree[i] << " ";
  }
  cout << endl;
  cout << search_node(tree, 10, 0) << endl;
  cout << search_node(tree, 1, 0) << endl;
  cout << search_node(tree, 24, 0) << endl;
  cout << search_node(tree, 5, 0) << endl;
  cout << search_node(tree, 123123, 0) << endl;
  cout << search_node(tree, 3, 0) << endl;

  free(tree);
  return 0;
}
