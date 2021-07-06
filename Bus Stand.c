#include<stdio.h>
#include<stdlib.h>

struct node* createNode(int);
struct pNode* createpNode();
void connect(int , int , struct node*[]);
void process(struct node *[]);
int validRoute(int , int , struct node *[]);
int traverse1(struct node*, int , int[]);
int traverse2(struct node*, int , int[] , int);
int traverse3(struct pNode* ,int , int[] , int);
int isMemberOfSubset(int , int[]);

typedef struct node {
	int data;
	struct pNode *next;
}node_t;

typedef struct pNode {
	struct node *pData;
	struct pNode *next; 
}pNode_t;

int n;
int nSubset;

void main(){
	printf("\t\t***********WELCOME*********** \n\n  How many cities are there in Treeland?\n\t :>> ");
	int i;
	scanf("%d",&n);
	struct node *pointerArray[n];			
	for(i=0;i<n;i++){
		pointerArray[i] = createNode(i);
	}
	
	printf("Enter the road connections bettween cities\n");
	int a,b;
	for(i=0;i<n-1;i++){
		printf("\t  :>> ");
		scanf("%d%d",&a,&b);
		
		connect(a,b,pointerArray);
		connect(b,a,pointerArray);
		}
		process(pointerArray);
}

void process(struct node *pointerArray[]){
	
	int i,j,count = 0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(validRoute(i+1,j+1,pointerArray)==1){
				count++;
			}
		}
	}
	printf("The number of connected segments are : %d",count+n);
}

int validRoute(int a , int b , struct node *pointerArray[]){
	nSubset = b-a+1;
	int subset[nSubset];
	int i;
	for(i=0;i<nSubset;i++){
		subset[i]= a+i;
	}
	return traverse1(pointerArray[a-1],b,subset);
	
}
int traverse1(struct node *rootNode,int b,int subset[]){
	if(rootNode->next->pData==NULL){
		return 0;
	}else if(rootNode->next->pData->data==b){
		return 1;
	}else if(isMemberOfSubset(rootNode->next->pData->data,subset)==1){
		
		if(traverse2(rootNode->next->pData,b,subset,rootNode->data)==1){
			return 1;
		}
	}else{
		return traverse3(rootNode->next,b,subset,rootNode->data);
	}
	
}
int traverse2(struct node *rootNode,int b,int subset[],int a){
	if(rootNode->next==NULL){
		return 0;
	}else if(rootNode->next->pData->data==b){
		return 1;
	}else if(isMemberOfSubset(rootNode->next->pData->data,subset)==1){
		if(traverse2(rootNode->next->pData,b,subset,rootNode->data)==1){
			return 1;
		}
	}else{
		return traverse3(rootNode->next,b,subset,a);
	}
	
}

int traverse3(struct pNode *rootNode,int b,int subset[],int a){
	if(rootNode->next == NULL){
		return 0;
	}else if(rootNode->next->pData->data==b){
		return 1;
	}else if(rootNode->next->pData->data==a){
		return traverse3(rootNode->next,b,subset,a);
	}else if(isMemberOfSubset(rootNode->next->pData->data,subset)==1){
		if(traverse2(rootNode->next->pData,b,subset,a)==1){
			return 1;
		}
	}else{
		return traverse3(rootNode->next,b,subset,a);
	}
	
}

int isMemberOfSubset(int x , int subset[]){
	
	int i;
	for(i=0;i<nSubset;i++){
		if(subset[i]==x){
			return 1;
		}
	}
	return 0;
}

void connect(int a,int b,struct node *node[]){
	
	struct pNode *newpNode = createpNode();
	newpNode->pData = node[b-1];
	newpNode->next = &(*node[a-1]->next);
	node[a-1]->next = newpNode;
}

struct node* createNode(int a){
	struct node *newNode = (struct node*)malloc (sizeof(struct node));
	newNode->data = a+1;
	newNode->next = NULL;
	return newNode;
}

struct pNode* createpNode(){
	struct pNode *newNode = (struct pNode*)malloc(sizeof(struct pNode));
	newNode->pData = NULL;
	newNode->next = NULL;
	return newNode;
}

