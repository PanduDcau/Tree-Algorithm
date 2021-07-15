#include<stdio.h>

typedef struct complex
{
	float real;
	float img;	
} complex;

 complex add(complex n1,complex n2);

int main()
{
  complex n1,n2,temp;
  
  printf("Enter the First Complex:");
  scanf("%f%f",&n1.real,&n1.img);
  
  	printf("Enter the Second Complex:");
  scanf("%f%f",&n2.real,&n2.img);
  
  temp=add(n1,n2);
  printf("Sum= %.1f + %.1fi",temp.real, temp.img);
	
	return 0;
}

complex add(complex n1,complex n2)
{
	complex temp;
	
	temp.real=n1.real +n2.real;
	temp.img =n1.img + n2.img;
	
	return(temp);
}
