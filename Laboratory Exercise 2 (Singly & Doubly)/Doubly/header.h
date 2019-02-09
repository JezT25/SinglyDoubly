#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct StructNode{
	int data;
	struct StructNode *prev, *next;
} node;

typedef struct StructList{
	int count;
	struct StructNode *head, *tail;
} list;

void insertFront(list *L, int x);
void insertRear(list *L, int x);
void insertAt(list *L, int x, int p);
void removeFront(list *L);
void removeRear(list *L);
void removeAt(list *L, int p);
void printList(list *L);
void printMirror(list *L);
 
#endif
