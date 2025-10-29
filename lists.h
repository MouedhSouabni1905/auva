#ifndef LISTS_H
#define LISTS_H

enum elt_type { TASK, PROJECT, GOAL };

typedef struct lstelt lstelt_t; // list element
struct lstelt {
  char description[4048]; // or list name
  enum elt_type type;
  int identifier;
  int elements[]; // array of element ids
};

lstelt_t *newtask(char *description);

lstelt_t *newproj(char *description);

lstelt_t *newgoal(char *description);

int gettype(lstelt_t *element);

int getid(lstelt_t *element);

char *getdescr(lstelt_t *element);

int addchildren(lstelt_t *element, int *children);

int *getchildren(lstelt_t *element);

#endif // LISTS_H
