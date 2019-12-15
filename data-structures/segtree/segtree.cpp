#ifndef SEGTREE_CPP
#define SEGTREE_CPP

#include <bits/stdc++.h>
#include "segtree.h"


segtree *create_segtree(int n){
  segtree *st = (segtree*) malloc (sizeof(segtree));
  st->size = n;
  st->st = (int *) malloc (sizeof(int) * 4 * n);
  return st;
}

void free_segtree(segtree *st){
  free(st->st);
  free(st);
}


void build_segtree(segtree *st, int *values, int st_index, int l, int r){
  if (l == r) {
     st->st[st_index] = values[l];
     return;
  }
  int mid = (l+r)/2;
  build_segtree(st, values, 2*st_index+1,l,mid);
  build_segtree(st, values, 2*st_index+2,mid+1,r);
  st->st[st_index] = sum(st->st[2*st_index+1], st->st[2*st_index+1]);
  printf("id %d\n", st->st[st_index]);

}

int sum(int x, int y){
  return x+y;
}

int query(segtree *st, int l, int r, int min, int max, int pos){
  int mid = (max+min)/2;
  if (l<min || r>max) {
    return 0;
  }
  else if (l <= min && r >= max) {
    return st->st[pos];
  }
  else{
    sum(query(st,l,r,min,mid,2*pos + 1), query(st,l,r,mid+1,max,2*pos + 1));
  }

}

#endif
