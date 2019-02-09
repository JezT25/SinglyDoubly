#include "header.h"

int main(int argc, char *argv[]) {																//MAIN
	int x, p;
	char ch;

	list *L = malloc(sizeof(list));
	
	L->head = NULL;
	L->tail = NULL;
	L->count = 0;
		
	for(;;){
		printf("\nWhat would you like to do?\n");
		printf("[1] Insert Front\n");printf("[2] Insert Rear\n");printf("[3] Insert At\n");
		printf("[4] Delete Front\n");printf("[5] Delete Rear\n");printf("[6] Delete At\n");
		printf("[7] Display All\n");

		ch = getch();

		if(ch=='1'){
			printf("\nNumber to be inserted: ");
			scanf("%d", &x);
			insertFront(L, x);
		}
		else if(ch=='2'){
			printf("\nNumber to be inserted: ");
			scanf("%d", &x);
			insertRear(L, x);
		}
		else if(ch=='3'){
			printf("\nNumber to be inserted: ");
			scanf("%d", &x);
			printf("Position: ");
			scanf("%d", &p);
			insertAt(L, x, p);
		}		
		else if(ch=='4'){
			deleteFront(L);
		}		
		else if(ch=='5'){
			deleteRear(L);
		}
		else if(ch=='6'){
			printf("Position to be deleted: ");
			scanf("%d", &p);
			deleteAt(L, p);
		}
		else if(ch=='7'){
			displayAll(L);
		}
		else{
			printf("\nQuit?\n[Any Key] Yes\n[1] No\n");
			
			ch = getch();
			
			if(ch!='1'){
				return 0;
			}
		}
	}

//		insertFront(L, 2);		//sequence of operations asked in the exercise
//		displayAll(L);
//		insertFront(L, 1);
//		displayAll(L);
//		insertFront(L, 0);
//		displayAll(L);
//		insertRear(L, 3);
//		displayAll(L);
//		insertRear(L, 5);
//		displayAll(L);
//		insertAt(L, 4, 4);
//		displayAll(L);
//		deleteFront(L);
//		displayAll(L);
//		deleteRear(L);
//		displayAll(L);
//		insertAt(L, 88, 2);
//		displayAll(L);
//		deleteAt(L, 2);
//		displayAll(L);
		
		
		getch();
		return 0;
}

