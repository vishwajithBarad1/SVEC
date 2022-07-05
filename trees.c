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
		
	}
	
	
	
