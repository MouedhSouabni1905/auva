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

int *addchild(lstelt_t element, int *oldList, int length) {
  int * newChildrenList = malloc(length * sizeof(oldList[0]) + sizeof(element.identifier));
  
  if(length == 1) {
    newChildrenList[0] = element.identifier;
    return newChildrenList;
  }

  int i;
  for(i = 0; i < length; i++) {
    newChildrenList[i] = oldList[i];
  }

  newChildrenList[i] = element.identifier;

  //free(oldList);

  return newChildrenList;
}
