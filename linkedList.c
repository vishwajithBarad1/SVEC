	#include<stdio.h>
	struct Node{
		int data;
		struct Node *next;
	};
	struct Node *head=NULL;
	struct Node *createNode(int val){
		struct Node *n;
		n=(struct Node*)malloc(sizeof(struct Node));
		n->next=NULL;
		n->data=val;
		return n;
	}
	void main(){
		struct Node *n1,*n2,*n3;
		n1=createNode(10);
		n2=createNode(20);
		n3=createNode(30);
		head=n1;
		n1->next=n2;
		n2->next=n3;
	}
