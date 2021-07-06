#include<stdio.h>
int main()
{
	int no,i;
	printf("Input The Number Of Message:");
	scanf("%d",&no);
	printf("\n");
	int x=1;
 while(no>=x)	
 {

    char msg[20];
    int a;
    printf("\nThe Message %d:\n",x);
    scanf("%s",msg);
    	printf("\n");
    for(i=0;msg[i]!='\0';i++)
    {
    	a=msg[i];
    	printf("%c",155-msg[i]);
	}
	x++;
}
return 0;
}
