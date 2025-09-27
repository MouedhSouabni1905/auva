#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

#define MAX_TYPE_SIZE 8

lstelt_t * newtask(char * description) {
	lstelt_t * newelement = (lstelt_t*) malloc(sizeof(lstelt_t));
	strcpy(newelement->description,description);
	newelement->type = TASK;
	newelement->identifier = 0; // to be replaced by call to a function that reads a file and returns the next available id
	return newelement;
}

lstelt_t * newproj(char * description) {
	lstelt_t * newelement = (lstelt_t*) malloc(sizeof(lstelt_t));
	strcpy(newelement->description,description);
	newelement->type = PROJECT;
	newelement->identifier = 1; // to be replaced by call to a function that reads a file and returns the next available id
	return newelement;
}

lstelt_t * newgoal(char * description) {
	lstelt_t * newelement = (lstelt_t*) malloc(sizeof(lstelt_t));
	strcpy(newelement->description,description);
	newelement->type = GOAL;
	newelement->identifier = 3; // to be replaced by call to a function that reads a file and returns the next available id
	return newelement;
	
}

void printdetails(lstelt_t * elt) {
	char type[sizeof(char)*MAX_TYPE_SIZE];
	char description[sizeof(elt->description)];
	strcpy(description,elt->description);
	int id = elt->identifier;
	int children = sizeof(elt->elements)/sizeof(elt->elements[0]);
	if (children == 1) {children = 0;}
	switch (elt->type) {
		case 0:
			strcpy(type,"Task");
			break;
		case 1:
			strcpy(type,"Project");
			break;
		case 2:
			strcpy(type,"Goal");
			break;
		default:
			break;
	}
	printf("Description: %s\nType: %s\nID: %d\nNumber of children: %d\n",description,type,id,children);
}

int gettype(lstelt_t * element) {}

int getid(lstelt_t * element) {}

char * getdescr(lstelt_t * element) {}

int * getchildren(lstelt_t * element) {}
