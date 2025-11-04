#include "lists.h"
#ifndef BINDINGS_H
#define BINDINGS_H

// This module defines the api of the lists data model
// Goals:
// * The api should remove the possibility for the frontend to interact with memory
// * Therefore it should implement all the memory handling functions
// * It should implement state handling (there is no state per se but assuming the state is the
// data structure used to store all the data of the application at runtime, this module should
// be the only one handling that data structure, the frontend module should only make api calls to
// this module, like "create", "get", etc
// Description:
// * A struct contain pointers to: one array of elements (list elements) and one array of arrays where each array
// element is a pointer to the array of the IDs of the children of the element in the corresponding index.
// That's the main data structure.
// * Contains functions for reading and writing to yaml files for persistence handling
// * Contains api calls to lists.h functions and allocates memory accordingly
// * Shouldn't contain io operations other than handling the persistence files, i.e. no printing to stdout

typedef struct listsdata {
	lstelt_t * elements;
	int elementslength;
	int ** childrenlist;
	int childrenlistlength;
} listsdata_t;

listsdata readyaml(); // allocates memory of the whole data struct

void writeyaml(listsdata data); // frees memory of the whole data struct (sub arrays memory is freed in other functions)

void addchildren(int * childrentoadd, int elt_intex, int * oldchildren); // calls lists.h's addchild(...) in a loop

void rmchildren(int * childrentodel, int elt_intex, int * oldchildren); // calls lists.h's addchild(...) in a loop
	      // enum?
char * format(int mode, listsdata data);

int computeID(listsdata data);

lstelt_t create_element(enum elt_type type, char * description);


#endif // BINDINGS_H
