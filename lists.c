#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF_LEN 4048

lstelt_t newtask(char *description) {
  lstelt_t ntask;
  strcpy(ntask.description, description);
  ntask.type = TASK;
  ntask.identifier = 1;
  return ntask;
}

lstelt_t newproj(char *description) {
  lstelt_t nproj;
  strcpy(nproj.description, description);
  nproj.type = TASK;
  nproj.identifier = 2;
  return nproj;
}

lstelt_t newgoal(char *description) {
  lstelt_t ngoal;
  strcpy(ngoal.description, description);
  ngoal.type = TASK;
  ngoal.identifier = 3;
  return ngoal;
}

// Takes the pointer to the first child (ie. first element of the array)
// the length of the array
// and the element to be added to the array (as a child)
int *addchildren(lstelt_t element, int *firstchild, int length) {
  // since the local variable is added to the stack,
  // it will be release as soon as the function ends,
  // so the returned pointer would result in a segfault
  // TODO
  // Use realloc or calloc to create a new array

  return newChildrenList;
}
