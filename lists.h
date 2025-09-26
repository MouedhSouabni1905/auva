#ifndef LISTS_H
#define LISTS_H

typedef struct task task_t;
struct task {
	char description[4048]; // or list name
	int identifier;
	int * elements[]; // ptr to list of tasks
};

typedef struct proj proj_t;
struct proj {
	char description[4048]; // or list name
	int identifier;
	int * elements[]; // ptr to list of tasks
};

typedef struct goal goal_t;
struct goal {
	char description[4048]; // or list name
	int identifier;
	int * elements[]; // ptr to list of tasks
};

void testfunc(int childrennum, char * descr, int id);

#endif //LISTS_H
