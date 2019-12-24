#include <bits/stdc++.h>
#include "segtree.h"


int main(int argc, char const *argv[]) {
  int *input, n;
  segtree *st;
  printf("Select the number of elements: ");
  scanf("%d",&n );

  input = (int *) malloc (sizeof(int) * n);
  for (int i = 0; i < n; i++) {
    scanf("%d",&input[i] );
  }

  st = create_segtree(n);
  build_segtree(st,input,0,0,st->n-1);
  for (int i = 0; i < 4*(st->n); i++) {
    printf("%d ",st->st[i] );
  }
  printf("\n");
  printf("query %d\n",query(st, 0, 0, st->n-1, 1, 3) );
  printf("query %d\n",query(st, 0, 0, st->n-1, 0, 1) );
  printf("query %d\n",query(st, 0, 0, st->n-1, 0, 0) );
  free_segtree(st);
  free(input);
  return 0;
}
