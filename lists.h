#ifndef LISTS_H

#define LISTS_H

typedef struct task {
	char * description[4048]; // or list name
	union {
		task_t ** elements; // ptr to list of tasks
		int identifier; // when a task type doesn't contain elements, it is itself an element and requires an identifier
				// lists of tasks do not require an identifier, they are identified by their name
	}
} task_t



#endif //LISTS_H
