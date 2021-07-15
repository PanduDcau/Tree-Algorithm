#include<stdio.h>
#include<string.h>
int main()
{
	
	int i,j;
	char a[10][50],temp[50];
	
	printf("Enter Names:");
	
	for(i=0;i<10;i++)
	 scanf("%s[^\n]",a[i]);
	 
	 for(i=0;i<9;i++)
	  for(j=i;j<=9;j++)
	  {
	  	if(strcmp(a[i],a[j])>0)
	  	{
	  		strcpy(temp,a[i]);
	  		strcpy(a[i],a[j]);
	  		strcpy(a[j],temp);
		  }
	  }
	
	printf("Print In Lexicographical:\n");
	
	for(i=0;i<10;i++)
	{
		puts(a[i]);
	}
	return 0;
}
