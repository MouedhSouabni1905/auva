#include "lists.h"
#include <stdio.h>

int main() {
  lstelt_t *new_el = newtask("Some task");
  lstelt_t *other_new_el = newproj("Some project");
  lstelt_t *elements[2] = {new_el,
                           other_new_el}; // list of all elements, size is
                                          // hard-coded for testing purposes
  int childrenOne[1];
  int empty[1] = {0};
  void *allChildren[2] = {&childrenOne, &empty};
  void *auva[2] = {allChildren, elements};
  // TODO
  // Fix getters, constructors and data model to fit the modifications
  // Implement functions that add/remove children to/from elements
  // Test them out

  // Visual representation:
  //      Auva          allChildren
  //    Element         1,2,3,4,5,...
  //    Element         1,2,3,4,5,...
  //    Element         1,2,3,4,5,...
  //    Element         1,2,3,4,5,...
  //    ...             ...

  printf("Description: %s\nType: %d\nID: %d\nChildren: %s\n",
         new_el->description, new_el->type, new_el->identifier, "1,2,3,4");
}
