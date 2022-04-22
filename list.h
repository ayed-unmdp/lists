#define true 1
#define false 0

typedef struct list_node {
  void *value;
  struct list_node *next;
} list_node;

typedef struct list {
  list_node *head;
  int length;
} list;

typedef int bool;

void list_init(list *L);
bool list_is_empty(list L);
bool list_is_full(list L);
int list_length(list L);
void *list_get(list L, int index);
void list_insert(list *L, int index, void *value);
void list_delete(list *L, int index);
void list_traverse(list L, bool look(void *value, int index, void *ctx), void *ctx);