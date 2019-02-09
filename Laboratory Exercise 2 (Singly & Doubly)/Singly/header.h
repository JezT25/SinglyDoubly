#include <stdio.h>
#include <stdlib.h>

typedef struct structNode{
	int data;
	struct structNode *next;
} node;

typedef struct structList{
	int count;
	struct structNode *head, *tail;
} list;

void insertFront(list *L, int x);
void insertRear(list *L, int x);
void insertAt(list *L, int x, int p);
void deleteFront(list *L);
void deleteRear(list *L);
void deleteAt(list *L, int p);
void displayAll(list *L);


void insertFront(list *L, int x){																//INSERT FRONT
	node *temp = malloc(sizeof(node));
		
	temp->data = x;
	temp->next = L->head;
	
	if(L->head == NULL){
    	L->tail = temp;
	}
	
	L->head = temp;
		
	L->count++;
}
	
void insertRear(list *L, int x){																//INSERT REAR
	node *temp = malloc(sizeof(node));
	
	temp->data = x;
	temp->next = NULL;
	
	if(L->head == NULL){
		L->head = temp;
    	L->tail = temp;
			
    	L->count++;
    	return;
	}
	
    L->tail->next = temp;
    L->tail = temp;	
    
	L->count++;
}

void insertAt(list *L, int x, int p){																//INSERT AT
	if(p == 1){
		insertFront(L, x);
		return;
	}
	else if(p == (L->count)+1){
		insertRear(L, x);
		return;
	}
	else if(p<1 || p>(L->count)+1){
		printf("\nParameter not found!\n");
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
	traverse->next = temp;
	
	L->count++;
}

void deleteFront(list *L){																	//DELETE FRONT
	if(L->head == NULL){
		printf("\nList empty!\n");
		return;
	}
	
	node *temp;
	
	temp = L->head;
	L->head = L->head->next;
	
	free(temp);	
	
	L->count--;
}

void deleteRear(list *L){																	//DELETE REAR
	if(L->tail == NULL){
		printf("\nList empty!\n");
		return;
	}
																
	node *temp;
	
	temp = L->head;
	
	while(temp->next!=L->tail){
		temp = temp->next;
	}
	
	L->tail = temp;
	temp = temp->next;
	L->tail->next = NULL;
	
	free(temp);
	
	L->count--;
}

void deleteAt(list *L, int p){																	//DELETE REAR
	if(p == 1){
		deleteFront(L);
		return;
	}
	else if(p == L->count){
		deleteRear(L);
		return;
	}
	else if(p<1 || p>L->count){
		printf("\nParameter not found!\n");
		return;
	}
	
	int i;
	
	node *prev, *temp;				//Temp is node before the node to be deleted
	
	prev = L->head;

	for(i=2;i<p;i++){
		prev = prev->next;
	}
	
	temp = prev->next;				
	prev->next = temp->next;
	temp->next = NULL;
	
	free(temp);
	
	L->count--;
}

void displayAll(list *L){																	//DISPLAY ALL
	node *temp;
	
	temp = L->head;
	
	printf("\nCurrent list data: ");
	
	while(temp!=NULL){
		printf(" %d", temp->data);
		temp = temp->next;
	} printf("\n");
	
}
