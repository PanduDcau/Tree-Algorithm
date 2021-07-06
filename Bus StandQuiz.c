#include<stdio.h>
#include<stdlib.h>
 
typedef struct node
{
    struct node *next;
    int city;
}node;
 
node *start[20];
//Cities Of Treeland

int V_city[20];
int n;

void read_graph();
//create a An Adjacency List

void insert(int,int);
//insert connected Roads in Treeland.
void dfs(int);

void main()
{
	int i;
	printf("\n\t\t\t\t-----------**WELCOME PASSENGERS TO TREELAND BUS SERVICE**-------------\n");
	read_graph();
	
	for(i=0;i<n;i++)
	{
		V_city[i]=0;
	}
	
	dfs(0);
}

void dfs(int i)
{
	node *ptr;
	
	printf("\n%d",i);
	ptr=start[i];
	V_city[i]=1;
	
	while(ptr!=NULL)
	{
		i=ptr->city;
		
		if(!V_city[i])
		dfs(i);
		ptr=ptr->next;
	}
}

void read_graph()
{
	int i,c1,c2,road_con;
	printf("Enter Number Of Cities In Treeland:");
	
	scanf("%d",&n);
	printf("\n");
	
	//intialize start to Null
	for(i=0;i<n;i++)
	{
	start[i]=NULL;
	
	printf("Enter The Number Of Road Between The Cities :");
	scanf("%d",&road_con);
	
	for(i=0;i<road_con;i++)
	{
		printf("Enter The Connected Cities \n");
		scanf("%d%d",&c1,&c2);
		insert(c1,c2);
	}
}

printf("\nNumber Of Bus Routines In The Treeland CIty :%d",road_con+n+n/2);
	
}

void insert(int c1,int c2)
{
	node *t,*u;
	
	u=(node*)malloc(sizeof(node));
	//traverse From First City To Next City after Entering The cities In order
	u->city=c2;
	u->next=NULL;
	
	if(start[c1]==NULL)
	start[c1]=u;
	
	else
	{
		t=start[c1];
		
		while(t->next!=NULL)
		t=t->next;
		t->next=u;
	}
}























