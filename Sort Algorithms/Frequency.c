#include<stdio.h>
#include<string.h>
int main()
{
	
	char a[10],ch;
	int i,frequency=0;
	printf("Enter The String1:");
	
	gets(a);
	
	printf("Enter The Character:");
	scanf("%c",&ch);
	
	for(i=0 ; a[i] !='\0';++i)
{ 
	if( ch == a[i])
		frequency++;
	
}
	printf("Enter The Frequency %c:%d",ch,frequency);
	
	
	return 0;
}
