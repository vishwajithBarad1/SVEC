	#include<stdio.h>
	#include<stdlib.h>
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
	void display(){
		struct Node *temp=head;
		while(temp!=NULL){
			printf("%d->",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
	void addAtB(int val){
		struct Node *currNode;
		currNode=createNode(val);
		if(head!=NULL){
			currNode->next=head;
			head=currNode;
		}
		else{
			head=currNode;
		}
		
	}
	void main(){
		struct Node *n1,*n2,*n3;
		n1=createNode(10);
		n2=createNode(20);
		n3=createNode(30);
		head=n1;
		n1->next=n2;
		n2->next=n3;
		display();
		printf("this is a linked list before insertion\n");
		addAtB(40);
		addAtB(50);
		addAtB(60);
		display();
	}
