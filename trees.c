#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *left,*right;
};
struct Node *Root=NULL;
struct Node *createNode(int val){
	struct Node *n;
	n=(struct Node*)malloc(sizeof(struct Node));
	n->left=NULL;
	n->data=val;
	n->right=NULL;
	return n;
}
void inorder(struct Node *root){
	if(root==NULL)
		return;
	inorder(root->left);
	printf("%d,",root->data);
	inorder(root->right);
}
void postorder(struct Node *root){
	if(root==NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	printf("%d,",root->data);
}
void preorder(struct Node *root){
	if(root==NULL)
		return;
	printf("%d,",root->data);
	preorder(root->left);
	preorder(root->right);
}
int height(struct Node *root){
if(root!=NULL){
	int a=height(root->left);
	int b=height(root->right);
	return 1+(a>b?a:b);
}
void BST(struct Node *root1,int value){
	if(root1==NULL){
		root=createNode(value);
		return;
	}
	if(value<root1->data){
		if(root1->left == NULL){
			root1->left=createNode(value);
		}
		else{
			BST(root1->left,value);
		}
	}
	else{
		if(root1->right == NULL){
			root1->right=createNode(value);
		}
		else
		BST(root1->right,value);
	}
}
void main(){
	struct Node *n1,*n2,*n3,*n4,*n5;
	n1=createNode(10);
	n2=createNode(20);
	n3=createNode(30);
	n4=createNode(40);
	n5=createNode(50);
	Root=n1;
	n1->left=n2;
	n1->right=n3;
	n2->left=n4;
	n2->right=n5;
	inorder(Root);
	printf("\n");		
	preorder(Root);
	printf("\n");
	postorder(Root);
	printf("\nhight of the tree is=%d",height(Root)-1);
}
