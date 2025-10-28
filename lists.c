#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF_LEN 4048

lstelt_t *newtask(char *description) {
  lstelt_t *ntask = malloc(BUF_LEN + sizeof(int) * 2);
  strcpy(ntask->description, description);
  ntask->type = TASK;
  ntask->identifier = 1;
  return ntask;
}

lstelt_t *newproj(char *description) {
  lstelt_t *nproj = malloc(BUF_LEN + sizeof(int) * 2);
  strcpy(nproj->description, description);
  nproj->type = TASK;
  nproj->identifier = 2;
  return nproj;
}

lstelt_t *newgoal(char *description) {
  lstelt_t *ngoal = malloc(BUF_LEN + sizeof(int) * 2);
  strcpy(ngoal->description, description);
  ngoal->type = TASK;
  ngoal->identifier = 3;
  return ngoal;
}

int gettype(lstelt_t *element) { return element->type; }

int getid(lstelt_t *element) { return 0; }

char *getdescr(lstelt_t *element) { return element->description; }

int *getchildren(lstelt_t *element) { return 0; }
