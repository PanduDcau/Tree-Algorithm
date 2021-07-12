#include <stdio.h>
#include <stdlib.h>

struct linkedlist{
	int data;
	struct linkedlist* next;
};

typedef struct linkedlist node;
node *start = NULL;

//-Insert data to the linked list-
void insert(int data){
	node* newnode;
	node* ptr;
	newnode = (node*) malloc(sizeof(node));
	newnode -> data = data;
	newnode -> next = NULL;
	if(start == NULL){
		start = newnode;
	}else{
		ptr = start;
		while(ptr -> next != NULL){
			ptr = ptr -> next;
		}
		ptr -> next = newnode;
	}
}

//-Delete data from given node the linked list -
void Delete_Node(int d){
	
	node* ptr;
	node* preptr;
	if(start != NULL){
		ptr = start;
		preptr = ptr;
		while(ptr -> data != d && ptr -> next != NULL){
			preptr = ptr;
			ptr = ptr -> next;
		}
		if(ptr -> next != NULL){
			preptr -> next = ptr -> next;
			free(ptr);	
		}
	}
}





//--Display the data in linked list --
void DisplayData(){
	if(start != NULL){
		
		node* ptr;
		ptr = start;
		printf("%d\n",start -> data);
		
		while(ptr -> next != NULL){
			ptr = ptr -> next;
			printf("%d\n",ptr -> data);
		}
    }
}




//--Display the size of linked list --
int size(){
	if(start != NULL){
	
		node* ptr;
		ptr = start;
		int i=1;
	
		while(ptr -> next != NULL){
			ptr = ptr -> next;
			i++;
		
		}
		return i;
	}else{
		return 0;
	}
}

int main(){
	
	insert(15);
	insert(4);
	insert(91);
	insert(71);
	insert(54);
	Delete_Node(71);
	insert(71);
	
	DisplayData();
	return 0;
}


