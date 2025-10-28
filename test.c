#include "lists.h"
#include <stdio.h>

int main() {
  lstelt_t *new_el = newtask("Some task");
  printf("Description: %s\nType: %d\nID: %d\n", new_el->description,
         new_el->type, new_el->identifier);
}
