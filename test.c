#include "lists.h"
#include <stdio.h>

int main() {
  lstelt_t task = newtask(
      "Some task"); // automatically created with id 1, contains no children
  lstelt_t project =
      newproj("Some project"); // will contain the task with id 1, has id 2
  lstelt_t elements[2] = {task, project}; // list of all elements, size is
                                          // hard-coded for testing purposes
  int childrenofproject[1] = {0};
  int childrenoftask[1] = {0};

  int *allChildren[2];

  // Use malloc to allocate space for arrays containing the IDs

  allChildren[1] =
      addchild(task, childrenofproject,
                  1); 
	allChildren[0] = childrenoftask;
	// Visual representation:
  //    elements        allChildren
  //    Element         (ptr to) 1,2,3,4,5,...
  //    Element         (ptr to) 1,2,3,4,5,...
  //    Element         (ptr to) 1,2,3,4,5,...
  //    Element         (ptr to) 1,2,3,4,5,...
  //    ...             ...
	printf("Elements:\n Task:\n  '%s', '%d', %d\n Project:\n  '%s', '%d', %d\n", task.description, task.identifier, allChildren[0][0], project.description, project.identifier, allChildren[1][0]);
}
