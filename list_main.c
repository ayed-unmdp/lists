#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void insert(list *L, int value);
bool average(void *value, int index, void *ctx);

int main() {
  list L;

  list_init(&L);

  insert(&L, 1);
  insert(&L, 2);
  insert(&L, 3);
  insert(&L, -2);
  insert(&L, 4);
  insert(&L, 5);
  insert(&L, -5);
  insert(&L, 6);
  insert(&L, -2);
  insert(&L, 7);
  insert(&L, -1);
  insert(&L, 8);

  int sum = 0;

  list_traverse(L, average, &sum);

  printf("%d\n", sum / list_length(L));
}

bool average(void *value, int index, void *ctx) {
  int *sum = ctx;
  *sum += *((int *) value);
  return true;
}

void insert(list *L, int value) {
  int *pointer = (int *) malloc(sizeof(int));
  *pointer = value;
  list_insert(L, 0, pointer);
}