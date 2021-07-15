#include<stdio.h>
#include<string.h>

#define max 20
int top,b[max];
void push(char);
void pop(void);
char a[20];

void push(char x)
{
	
	if (top==max-1)
	{
		printf("Stack is OverFlow");
	}
	
	else
	{
		b[top]=x;
		top++;
	}
	
}

void pop()
{
	printf("%c",b[top]);
	top--;
}

void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
	printf("%c",b[i]);
}

}
void main()
{
	int i;
	char a[20];
	printf("Enter the String :");
	 scanf("%s",a);
	 
	int l=strlen(a);
	
	for(i=-1;i<=l;i++)
	{
		push(a[i]);
	}
	
	for(i=-1;i<=l;i++)
	  pop();
	
	display();
	printf("\n");
	
	
}
