#include "header.h"

void insertFront(list *L, int x){
	node *temp = malloc(sizeof(node));
	
	temp->data = x;
	temp->prev = NULL;
	temp->next = L->head;
	
	if(L->head == NULL){
		L->tail = temp;
	}
	else{
		L->head->prev = temp;
	}

	L->head = temp;
	
	L->count++;
}
void insertRear(list *L, int x){
	node *temp = malloc(sizeof(node));
	
	temp->data = x;
	temp->next = NULL;
	
	if(L->head == NULL){
		L->head = temp;
    	L->tail = temp;
    	temp->prev = NULL;
	}
	else{
		L->tail->next = temp;
		temp->prev = L->tail;
		L->tail = temp;
	}
	
	L->count++;
}
void insertAt(list *L, int x, int p){
	if(p == 1 || p == 0){
		insertFront(L, x);
		return;
	}
	else if(p == (L->count)+1){
		insertRear(L, x);
		return;
	}
	
	int i;
	
	node *temp = malloc(sizeof(node));
	node *traverse;
	
	traverse = L->head;

	for(i=2;i<p;i++){
		traverse = traverse->next;
	}
	
	temp->data = x;
	temp->next = traverse->next;
	temp->prev = traverse;
	temp->prev->next = temp;
	temp->next->prev = temp;
	
	L->count++;	
}
