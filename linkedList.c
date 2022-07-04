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
	void addAtE(int val){
		struct Node *temp,*newNode;
		newNode=createNode(val);
		if(head!=NULL){
			temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=newNode;
		}
		else{
			head=newNode;
		}
	}
	void addAtM(int val,int pos){
		struct Node *temp=head,*newNode;
		newNode=createNode(val);
		while(--pos){
			temp=temp->next;
		}
		newNode->next=temp->next;
		temp->next=newNode;
	}
	void main(){
		int val,n,i,pos;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			val;
			scanf("%d",&val);
			addAtE(val);
		}
		printf("pos:val\n");
		scanf("%d%d",&pos,&val);
		addAtM(val,pos);
		display();
	}
	
	
	
	
	
	
