#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

void testfunc(int childrennum, char * descr, int id) {
	task_t * atask = malloc(4048+sizeof(int)+sizeof(int)*childrennum);
	strcpy(atask->description,descr);
	atask->identifier = id;
	printf("The task \'%s\' has an id of %d and has %d children\n",atask->description,atask->identifier,childrennum);
	free(atask);
}

int main() {
	testfunc(0,"Something",1);
}
