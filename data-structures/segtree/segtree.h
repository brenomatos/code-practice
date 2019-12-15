#ifndef SEGTREE_H
#define SEGTREE_H

#include <bits/stdc++.h>

typedef struct segtree{
  int *st;
  int size;
}segtree;

segtree *create_segtree(int n);

void free_segtree(segtree *st);

void build_segtree(segtree *st, int *values, int st_index, int l, int r);

int sum(int x, int y);

int query(segtree *st, int l, int r, int min, int max, int pos);
#endif
