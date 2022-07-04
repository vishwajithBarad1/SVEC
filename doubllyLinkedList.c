	#include<stdio.h>
	#include<stdlib.h>
	struct Node{
		int data;
		struct Node *next,*prev;
	};
	struct Node *head=NULL,*tail=NULL;
	struct Node *createNode(int val){
		struct Node *n;
		n=(struct Node*)malloc(sizeof(struct Node));
		n->next=NULL;
		n->data=val;
		n->prev=NULL;
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
			head->prev=currNode;
			head=currNode;
		}
		else{
			head=currNode;
		}		
	}
	void main(){
		int val,n,i,pos;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			val;
			scanf("%d",&val);
			addAtB(val);
		}
		display();
	}
	
	
	
	
	
	
