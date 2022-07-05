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
	}
	
	
	
