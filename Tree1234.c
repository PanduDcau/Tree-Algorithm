#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node *createnode(value)
{
	struct node *newnode=malloc(sizeof(struct node));
	
	newnode->data=value;
	newnode->left=NULL;
	newnode->right=NULL;
	
	return newnode;
}

struct node *insert(struct node *root,int data)
{
	if(root==NULL)
	return createnode(data);
	
	else if (data<root->data)
	root->left=insert(root->left,data);
	
	else if(data>root->data)
	root->right=insert(root->right,data);
	
	
}

void inorder(struct node *root)
{   int count=0;
	if(root==NULL)
	return;
	inorder(root->left);
	printf("%d\t",root->data);
	inorder(root->right);
	count++;
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
		
}








