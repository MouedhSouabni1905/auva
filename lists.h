#ifndef LISTS_H
#define LISTS_H

enum elt_type { TASK, PROJECT, GOAL };

typedef struct lstelt lstelt_t; // list element
struct lstelt {
  char description[4048]; // or list name
  enum elt_type type;
  int identifier;
};

lstelt_t newtask(char *description);

lstelt_t newproj(char *description);

lstelt_t newgoal(char *description);

int *addchildren(lstelt_t element, int *firstchild, int length);

#endif // LISTS_H
