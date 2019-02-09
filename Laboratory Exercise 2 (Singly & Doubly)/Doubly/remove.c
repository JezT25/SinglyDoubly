#include "header.h"

void removeFront(list *L) {
  node *temp;

  temp = L->head;
  
  if(L->head == L->tail){
  	L->head = NULL;
  	L->tail = NULL;
  }
  else{
    L->head = L->head->next;
    L->head->prev = NULL;
  }
  
  free(temp);

  L->count--;
}
void removeRear(list *L) {
  node *temp;
  
  temp = L->tail;
  
  if(L->head == L->tail){
  	L->head = NULL;
  	L->tail = NULL;
  }
  else{
  	L->tail = L->tail->prev;
    L->tail->next = NULL;
  }
  
  free(temp);
  
  L->count--;
}
void removeAt(list *L, int p) {
  if (p == 1) {
    removeFront(L);
    return;
  }
  else if (p == L->count) {
    removeRear(L);
    return;
  }

  int i;

  node *temp;

  temp = L->head;

  for (i = 1; i < p; i++) {
    temp = temp->next;
  }

  temp->next->prev = temp->prev;
  temp->prev->next = temp->next;
	
  free(temp);

  L->count--;
}
