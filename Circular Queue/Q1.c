#include<stdio.h>

void enQueue();
void deQueue();
void display();
void Isempty();
void Front();
void Size();

int queue[100], front = -1, rear = -1,i,choice,n,value;

int main()
{
	printf("\n Enter the size of QUEUE[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t QUEUE OPERATIONS USING ARRAY");
    printf("\n\t 1.Enqueue\n\t 2.Dequeue\n\t 3.Display\n\t 4.Is Empty\n\t 5.Front\n\t 6.Size\n\t 7.Exit");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                enQueue();
                break;
            }
            case 2:
            {
                deQueue();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                Isempty();
                break;
            }
            case 5:
            {
                Front();
                break;
            }
            case 6:
            {
                Size();
                break;
            }
            case 7:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                 
        }
    }
    while(choice!=7);
    return 0;

    
}

void enQueue(){
    if(rear == n-1)
        printf("\nQueue is Full!!");
    else {
        if(front == -1)
            front = 0;
            printf("Input and Element:");
            scanf("%d",&value);
        rear++;
        queue[rear] = value;
        printf("\nInserted -> %d", value);
    }
}

void deQueue(){
    if(front == -1)
        printf("\nQueue is Empty!!");
    else{
        printf("\nDeleted : %d", queue[front]);
        front++;
        if(front > rear)
            front = rear = -1;
    }
}

void display(){
    if(rear == -1)
        printf("\nQueue is Empty!!!");
    else{
        int i;
        printf("\nQueue elements are:\n");
        for(i=front; i<=rear; i++)
            printf("%d\t",queue[i]);
    }
}

void Isempty(){
    if(rear == -1 || front== -1)
        printf("\nQueue is Empty!!!");
    else{
        printf("\nQueue is Not Empty!!!");
    }
}

void Front(){
	if(front>=0)
	{
	    i=queue[front];
        printf("The Front Element",i);
    }
    else
    {   
    printf("The queue is Underflow");
	 
    	
	}
}

void Size(){
	if(front=-1)
        printf("The queue is Underflow");
    else
    {
    	printf("The Front Element",sizeof(queue[n]));
    	
	}
}

