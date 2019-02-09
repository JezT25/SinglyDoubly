#include "header.h"

void printList(list *L){
	node *temp;
	
	temp = L->head;
	
	printf("\nCurrent list data:        ");
	
	while(temp!=NULL){
		printf(" %d", temp->data);
		temp = temp->next;
	} printf("\n");
}
void printMirror(list *L){
	node *temp;
	
	temp = L->tail;
	
	printf("\nCurrent mirror list data: ");
	
	while(temp!=NULL){
		printf(" %d", temp->data);
		temp = temp->prev;
	} printf("\n");
}
