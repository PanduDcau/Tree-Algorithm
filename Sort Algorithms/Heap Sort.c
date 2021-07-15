#include<stdio.h>

void main()
{
	int a[100],num,i,j,c,root,temp;
	printf("\n Enter No of Elements:");
	scanf("%d",&num);
	printf("\n Enter the No:");
	for(i=0;i<num;i++)
	scanf("%d",&a[i]);
	
	for(i=1;i<num;i++)
	{
		c=1;
		do
		{
			root=(c-1)/2;
			if(a[root]<a[c])
			{
				temp=a[root];
				a[root]=a[c];
				a[c]=temp;
			}
			c=root;
		}
		while(c!=0);
	}
	
	printf("Heap array:");
		for(i=0;i<num;i++)
	scanf("%d",&a[i]);
	
	for(j=num-1;j>=0;j--)
	{
	  temp=a[0];
	  a[0]=a[j];
	  a[j]=temp;
	  root=0;
	  
	  do
	  {
	  	c=2*root +1; //left node Of the Element
	  	
	  	if(a[c]<a[c+1]&& c<j-1)
	  	c++;
	  	
	  	if(a[root]<a[c]&& c<j)
	  	{
	  		temp=a[root];
	  		a[root]=a[c];
	  		a[c]=temp;
		  }
		  root=c;
	  }
	  while(c<j);
	  
	  	}
	printf("The Sorted Array :");
	for(i=0;i<num;i++)
	printf("\t%d",a[i]);
	printf("\n Complexity:\n Best Case= Avg Case= Worst Case=0(n logn)\n");
	
}

