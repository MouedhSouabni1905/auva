#include "lists.h"
#include <stdio.h>

int main() {
  lstelt_t task = newtask(
      "Some task"); // automatically created with id 1, contains no children
  lstelt_t project =
      newproj("Some project"); // will contain the task with id 1, has id 2
  lstelt_t elements[2] = {task, project}; // list of all elements, size is
                                          // hard-coded for testing purposes
  int childrenofproject[1];
  int childrenoftask[1] = {0};

  int *allChildren[2];

  // Use malloc to allocate space for arrays containing the IDs

  allChildren[1] =
      addchildren(task, &childrenofproject[0],
                  2); // the children of project are the result of adding
                      // the task to the former list of children of projects
  allChildren[0] = childrenoftask; // children of task are the empty array since
                                   // it doesn't contain any children

  // TODO
  // Fix getters, constructors and data model to fit the modifications
  // Implement functions that add/remove children to/from elements
  // Test them out

  // Visual representation:
  //    elements        allChildren
  //    Element         1,2,3,4,5,...
  //    Element         1,2,3,4,5,...
  //    Element         1,2,3,4,5,...
  //    Element         1,2,3,4,5,...
  //    ...             ...
}
