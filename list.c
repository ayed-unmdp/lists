#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void list_init(list *L) {
  /*COMPLETAR*/
}

bool list_is_empty(list L) {
  /*COMPLETAR*/
}

bool list_is_full(list L) {
  /*COMPLETAR*/
}

int list_length(list L) {
  /*COMPLETAR*/
}

void *list_get(list L, int index) {
  /*COMPLETAR*/
}

void list_insert(list *L, int index, void *value) {
  /*COMPLETAR*/
}

void list_delete(list *L, int index) {
  /*COMPLETAR*/
}

void list_traverse(list L, bool look(void *value, int index, void *ctx), void *ctx) {
  list_node *node = L.head;
  int index = 0;

  while (node != NULL && look(node->value, index, ctx)) {
    node = node->next;
    index++;
  }
}