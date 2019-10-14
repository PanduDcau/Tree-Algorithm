#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node *createnode(value)
{
	struct node *Newnode=malloc(sizeof(struct node));
	
	Newnode->data=value;
	Newnode->left=NULL;
	Newnode->right=NULL;
	
	return Newnode;
}

struct node *insertleft(struct node *root,int value)
{
	root->left=createnode(value);
	return root->left;
}

struct node *insertright(struct node *root,int value)
{
	root->right=createnode(value);
	return root->right;
}


void inorder(struct node *root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}

void preorder(struct node *root)
{
	if(root==NULL)
	return;
	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
}

void postorder(struct node *root)
{
	if(root==NULL)
	return;
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->data);
}

void main()
{
	printf("Tree Representation:");
	printf("\n");
	
	struct node *root=createnode(4);
	
	insertleft(root,5);
	insertright(root,8);
	
	insertleft(root->left,6);
	insertright(root->left,9);
	
	insertleft(root->right,15);
	insertright(root->right,22);
	
	
	
	printf("Inorder Traversal :\n");
	inorder(root);
	
	printf("\n");
	printf("preorder Traversal :\n");
	preorder(root);
		printf("\n");
	printf("postorder Traversal :\n");
	postorder(root);
	
}






