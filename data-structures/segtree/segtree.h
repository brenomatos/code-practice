#ifndef SEGTREE_H
#define SEGTREE_H

#include <bits/stdc++.h>

typedef struct segtree{
  int *st;
  int n;
}segtree;

segtree *create_segtree(int n);

void free_segtree(segtree *st);

int build_segtree(segtree *st, int *values, int st_index, int b, int e);

int query(segtree *st, int st_index, int i, int j, int b, int e);

int sum(int x, int y);

#endif
