#ifndef SEGTREE_CPP
#define SEGTREE_CPP

#include <bits/stdc++.h>
#include "segtree.h"


segtree *create_segtree(int n){
  segtree *st = (segtree*) malloc (sizeof(segtree));
  st->n = n;
  st->st = (int *) malloc (sizeof(int) * 4 * n);
  return st;
}

void free_segtree(segtree *st){
  free(st->st);
  free(st);
}

int build_segtree(segtree *st, int *values, int st_index, int b, int e){
  if (b==e) {
    return st->st[st_index] = values[b];
  }
  int mid = (b+e)/2;
  return st->st[st_index] = sum(build_segtree(st,values,2*st_index+1,b,mid), build_segtree(st,values,2*st_index+2,mid+1,e));
}

int query(segtree *st, int st_index, int i, int j, int b, int e){
  if (j < b || i > e) {
    return 0;
  }
  if (i>=b && j <= e) {
    return st->st[st_index];
  }
  int mid = (i+j)/2;
  return sum(query(st,2*st_index+1,i,mid,b,e), query(st,2*st_index+2,mid+1,j,b,e));
}

int sum(int x, int y){
  return x+y;
}

#endif
