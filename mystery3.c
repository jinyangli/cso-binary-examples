/* Binary Puzzle 3 (slide 40) */
#include <stddef.h>

typedef struct node {
    long id;
    char *name;
    struct node *next;
} node;

char *mystery3(node *n, long id) {
   while (n) {
      if (n->id == id)
         return n->name;
      n = n->next;
   }
   return NULL;
}
