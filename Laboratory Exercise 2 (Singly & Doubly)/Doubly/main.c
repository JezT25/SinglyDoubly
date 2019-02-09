#include "header.h"

int main(int argc, char *argv[]) {
	SetConsoleTitle("Code by Jezreel :) - do not steal >:(");
	
	int x, p, a;
	char ch;
	
	list *L;
	L = malloc(sizeof(list));
	L->head = NULL;
	L->tail = NULL;
	L->count = 0;
	

	for(;;){
		printf("Code by Jezreel :) - do not steal >:(\n");
	
		printf("\nWhat would you like to do?\n");
		printf("[1] Insert Front\n");printf("[2] Insert Rear\n");printf("[3] Insert At\n");
		printf("[4] Remove Front\n");printf("[5] Remove Rear\n");printf("[6] Remove At\n");
		
		if(L->count==0){printf("\nList is empty\n");}
		else if(L->count>0){printList(L);printMirror(L);}
		
		if(a==1){printf("\nSuccessfully removed!\n");}
		else if(a==4){printf("\nParameter not found!\n");}
		else if(a==2){printf("\nInvalid input!\n"); return 0;}

		printf("\nFunction of choice: "); ch = getch(); printf("\n");

		if(ch=='1'){
			printf("\nNumber to be inserted: ");
			if (scanf("%d", &x) != 1){
				a=2;
			}
			else{	
				insertFront(L, x);
				a=0;
			}
			
		}
		else if(ch=='2'){
			printf("\nNumber to be inserted: ");
			if (scanf("%d", &x) != 1){
				a=2;
			}
			else {
				insertRear(L, x);
				a=0;
			}
		}
		else if(ch=='3'){
			printf("\nNumber to be inserted: ");
			if (scanf("%d", &x) != 1){
				a=2;
			}
			else{
				printf("Position: ");
				if (scanf("%d", &p) != 1){
					a=2;
				}
				else{			
					if (p < 0 || p > (L->count)+1) {
   	 					a=4;
  					}
  					else{
						insertAt(L, x, p);
						a=0;
					}
				}
			}
		}		
		else if(ch=='4'){
			if(L->head == NULL){
				a=5;
			}
			else{
				removeFront(L);
				a=1;
			}
		}		
		else if(ch=='5'){
			if(L->tail == NULL){
				a=5;
			}
			else{			
				removeRear(L);
				a=1;
			}
		}
		else if(ch=='6'){
			if(L->tail == NULL){
				a=5;
			}
			else{
				printf("\nPosition to be deleted: ");
				if (scanf("%d", &p) != 1){
					a=2;
				}
				else{
					if (p < 1 || p > L->count) {
	   	 				a=4;
	  				}
					else{
						removeAt(L, p);
						a=1;
					}
				}
			}
		}
		else{
			printf("\nQuit?\n[Any Key] Yes\n[2] No\n");
			
			ch = getch();
			
			if(ch!='2'){
				return 0;
			}
		}
		
		system("cls");
	}
	
//	insertFront(L, 3);
//	printList(L);
//	insertFront(L, 2);
//	printList(L);
//	insertFront(L, 1);
//	printList(L);
//	insertRear(L, 5);
//	printList(L);
//	insertRear(L, 6);
//	printList(L);
//	insertAt(L, 4, 4);
//	printList(L);
//	insertAt(L, 7, 7);
//	printList(L);
//	insertAt(L, 0, 0);
//	printList(L);
//	removeFront(L);
//	printList(L);
//	removeRear(L);
//	printList(L);
//	removeRear(L);
//	printList(L);
//	insertAt(L, 8, 2);
//	printList(L);
//	removeAt(L, 2);
//	printList(L);
//	printMirror(L);
//	
//	getch();
//	return 0;
}
