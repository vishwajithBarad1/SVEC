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
		while(--pos!=0){
			temp=temp->next;
		}
		newNode->next=temp->next;
		temp->next=newNode;
	}
	void delAtB(){
		if(head!=NULL){
			head=head->next;
		}
	}
	void delAtE(){
		struct Node *curr=head,*prev;
		if(head!=NULL){
			if(head->next==NULL){
				head=NULL;
			}
			else if(head!=NULL){
				while(curr->next!=NULL){
					prev=curr;
					curr=curr->next;
				}
				prev->next=NULL;
			}
		}
	}
	void delAtM(int pos){
		struct Node *curr=head,*prev;
		while(pos--){
			prev=curr;
			curr=curr->next;
		}
		prev->next=curr->next;
	}
	void reverse(){
		struct Node *p=NULL,*c=head,*n=head->next;
		while(n!=NULL){
			c->next=p;
			p=c;
			c=n;
			n=c->next;
		}
		c->next=p;
		head=c;
	}
	void main(){
		int val,n,i,pos;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			val;
			scanf("%d",&val);
			addAtE(val);
		}
		display();
		reverse();
		display();
	}
