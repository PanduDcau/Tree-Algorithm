#include<stdio.h>

int main()
{
	int i,j,temp,a[5],n;
	
	
	
	printf("\nArrange The Numbers:");
	scanf("%d",&n);
	
	printf("Enter The Numbers:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
}
	for(j=0;j<n;j++)
	for(i=j+1;i<n;i++)
	{
        if(a[j]>a[i])
        {
        	temp=a[j];
        	a[j]=a[i];
        	a[i]=temp;
		}
		
		printf("\n");
	}
	
	
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	
 return 0;
}
