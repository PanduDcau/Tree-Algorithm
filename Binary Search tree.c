#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
	int ht;
};

struct node *createnode(value)
{
	struct node *Newnode=malloc(sizeof(struct node));
	
	Newnode->data=value;
	Newnode->left=NULL;
	Newnode->right=NULL;
	
	return Newnode;
}

struct node *insert(struct node *root,int data)
{
	if(root==NULL)
	return createnode(data) ;
	else if(data<root->data)
	root->left= insert(root->left,data);
	
	else if(data>root->data)
	root->right= insert(root->right,data);
}

void inorder(struct node *root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}

struct node*search(struct node *root,int data)
{
	printf("Enter The Value:");
	scanf("%d",&data);
	if(root==NULL);
	return;
	
	if(data<root->data)
	{
		search(root->left,data);
		printf("Value exist");
	}
	
	
	else if(data>root->data)
	{
		search(root->right,data);
			printf("Value exist");
		
	}
	
	
}

int height(struct node *root)
{
	int max;

	int lh=height(root->left);
	int rh=height(root->right);	
	
	
	if(lh>rh)
	{
		max=lh+1;
		return max;
	}
	
	else
	{
		max=rh+1;
		return max;
	}
	
}
void main()
{
	struct node*root=NULL;
	root=insert(root,9);
	insert(root,4);
	insert(root,15);
	insert(root,5);
	insert(root,13);
	insert(root,17);
	insert(root,8);
	insert(root,24);
	printf("Order:\n");
	inorder(root);
	printf("\n");
		
	height(root);
}
