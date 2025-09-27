#ifndef LISTS_H
#define LISTS_H

enum elt_type {
	TASK,
	PROJECT,
	GOAL
};

typedef struct lstelt lstelt_t; // list element
struct lstelt {
	char description[4048]; // or list name
	enum elt_type type;
	int identifier;
	int * elements; // ptr to list of element, by id
};

lstelt_t * newtask(char * description);

lstelt_t * newproj(char * description);

lstelt_t * newgoal(char * description);

void printdetails(lstelt_t * elt);

int gettype(lstelt_t * element);

int getid(lstelt_t * element);

char * getdescr(lstelt_t * element);

int * getchildren(lstelt_t * element);

#endif //LISTS_H
