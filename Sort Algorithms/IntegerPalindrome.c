#include<stdio.h>

int main()
{
	int i,n,rem,rev=0,n1;
	printf("Enter The Number :");
	scanf("%d",&n);
	n1=n;
	while(n!=0)
	{
	rem=n%10;
	rev=rev*10 +rem;
    n/=10;
}
	
	printf("Reversed Number:%d",rev);
	
if(n1==rev)
	printf("\n Palindrome");
else

printf("\n Not Palindrome");

	return 0;
}
