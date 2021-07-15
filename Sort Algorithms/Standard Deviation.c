#include<stdio.h>
#include<math.h>

float calculateSD(float data[]);

int main()
{
	int i;
	float data[10];
	
	printf("Enter 10 Elements:");
	for(i=0;i<10;i++)
	{
		scanf("%f",&data[i]);
	}
	printf("\n Standard Deviation=%.6f",calculateSD(data));
	
	return 0;
}

float calculateSD(float data[])
{
	float sum=0.0,mean,standardDev=0.0;
	int i;
	
	for(i=0;i<10;++i)
	{
		sum+=data[i];
	}
	mean=sum/10;
	
	for(i=0;i<10;++i)
	    standardDev+= pow(data[i]-mean,2);
	    
	    return sqrt(standardDev/10);
	
}

