#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

struct node *start=NULL;

struct node *insert(struct node *start);
struct node * delete(struct node *start);
int count=0;
struct node *traverse(struct node *start);
struct node *insert_at_end(struct node *start);



int main()
{
	int op,data;
	printf("Doubly Linked List");
	printf("\n");
	
	do
	{
		printf("1)Create:\n");
		printf("2)Delete:\n");
		printf("3)Travese;\n");
		printf("4)Insert;\n");
		printf("Enter The Choise:");
		scanf("%d",&op);
		switch(op)
		{
		case 1:
		start=insert(start);
		break;
		
		case 2:
		start=delete(start);
		break;
		
		case 3:
		printf("Display Data:\n");
		start=traverse(start);
		break;
		
		case 4:
		start=insert_at_end(start);
		break;
		
		}
	}while(op!=5);
	
	return 0;
}

struct node *insert(struct node *start) {
   struct node *ptr,*t;
   int x,pos;
   printf("Enter The Value:");
		scanf("%d",&x);
		printf("Insert The Postion:");
		scanf("%d",&pos);
		t = (struct node*)malloc(sizeof(struct node));
   count++;
   
		ptr=start;
		t->data=x;
		 while(ptr->data!=pos)
		 {
		 	ptr=ptr->next;
		 }
		t->next=ptr->next;
		t->prev=ptr;
		ptr->next=t;
		ptr->next->prev=t;
		
	
   return start;
}

struct node *insert_at_end(struct node *start) {
   struct node *t, *temp;
   int x;
   t = (struct node*)malloc(sizeof(struct node));
   count++;
   printf("Enter The Value:");
		scanf("%d",&x);
   
   if (start == NULL) {
      start = t;
      start->data = x;
      start->next = start;
      start->prev=start;
      return;
   }
   
   temp = start;
   
   while (temp->next != start)
      temp = temp->next;  
   
   temp->next = t;
   t->prev=temp;
   t->data    = x;
   t->next    = start;
   
   return start;
}

struct node *delete(struct node *start)
 {
   struct node *t, *u;
   int n,pos;
     
   if (start == NULL) {
      printf("Linked list is already empty.\n");
      return;
   }
   
   count--;
   
   if (start->next == start) {
      n = start->data;
      free(start);
      start = NULL;
      printf("%d deleted from end successfully.\n", n);
      return;
   }
   
   
  printf("Insert The Postion:");
		scanf("%d",&pos);
   t = start;
   
   while (t->data
   != pos) 
   {
   	u=t;
      t = t->next;
   }
   n=t->data;
   u->next=t->next;
   t->next->prev=u;
   free(t);

   printf("%d deleted from end successfully.\n", n);

	return start;
}

struct node *traverse(struct node *start) {
   struct node *t;
   
   t = start;
   
   if (t == NULL) {
      printf("Linked list is empty.\n");
      return;
   }
   
   printf("There are %d elements in linked list.\n", count);
   
   while (t->next != start) {
      printf("%d\n", t->data);
      t = t->next;
   }
   printf("%d\n", t->data);
   return start;
}






















