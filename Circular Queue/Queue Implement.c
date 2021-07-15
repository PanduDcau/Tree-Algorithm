#include<stdio.h>
#define size 5
int item[size];
int front=-1,rear=-1;
void isempty();
void isfull();
void enqueue(int data);
void dequeue();
void display();



void isfull()
{
	if((front==rear+1)||(front==0 && rear==size-1))
	printf("Queue Is Overflow\n");
	else
	printf("Queue is not Overflow\n");
}

void isempty()
{
	if(front==-1)
	printf("Queue Is Empty\n");
	else {
	printf("Queue is not Empty \n");
        }
}

void enqueue(int data)
{
	if(( rear==size-1&& front==0 )||(front==rear+1))
	{
	
	printf("Queue is Overflowed");
}
	else
	{
		if(front==-1)
		front=0;
		rear=(rear+1)%size;
		printf("\n Element Entered:\n");
		scanf("%d",&data);
	   item[rear]=data;
	}
}

void dequeue()
{
	int data;
	
	if(front==-1)
	{
	printf("Queue is Underflow");
}
	else
	{
		data=item[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		
		else
		{
			front=(front+1)%size;
			printf("\n Deleted Elemnet:%d\n",data);
		}
	}
}

void display()
{
	int i;
	if ( front==-1 )
	printf("Queue Is Empty");
	else
	{
		printf("\n Front:\n %d",front);
		printf("\n Items:\n");
		for( i=front ; i!=rear+1 ; i=(i+1)%size )
		{
			printf("%d \n",item [i]);
    }
           	
			printf("\n Rear :%d \n",rear);
		
	}
}

int main()
{
	printf("Circular Queue:\n");
	printf("----------------\n\n");
	
	int choice,data;
	printf("\n\t 1.Enqueue\n\t 2.Dequeue\n\t 3.Display\n\t 4.IsFull\n\t 5.IsEmpty\n\t");
	do
	{
		printf("Select The Option:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				enqueue(data);
				break;
				
			case 2:
				dequeue();
				break;
				
			case 3:
				display();
				break;
				
			case 4:
				isempty();
				break;	
			
			case 5:
				isfull();
				break;
				
			default:
			printf("\nEnter A Correct Input:1-5");
		}
	}
	
	while(choice!=5);
	
	return 0;
}



