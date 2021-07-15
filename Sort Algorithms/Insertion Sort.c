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
	for(i=0;i<n;i++)
	{
        temp=a[i];
        j=i-1;
		while(temp<a[j] && j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
		
		printf("\n");
	}
	
	
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	
 return 0;
}
