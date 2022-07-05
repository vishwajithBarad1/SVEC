	#include<stdio.h>
	int vertices=5;	
	struct Node{
		int data;
		struct Node *next;
	};
	struct Node *GRAPH[5];
	struct Node *createNode(int val){
		struct Node *n;
		n=(struct Node*)malloc(sizeof(struct Node));
		n->next=NULL;
		n->data=val;
		return n;
	}
	void display(){
		int i,n=vertices;
		for(i=0;i<n;i++){
			struct Node *temp=GRAPH[i];
			printf("%d: ",i);
			while(temp!=NULL){
				printf("%d->",temp->data);
				temp=temp->next;
			}
			printf("\n");
		}
	}	
	void addAtE(int a,int val){
		struct Node *temp=GRAPH[a];
		if(temp!=NULL)
		{
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=createNode(val);
		}
		else{
			GRAPH[a]=createNode(val);
		}
	}
	void addEdge(int a,int b){
		addAtE(a,b);
		addAtE(b,a);
	}
	void main(){
		addEdge(0,2);
		addEdge(0,1);
		addEdge(1,3);
		addEdge(2,4);
		addEdge(3,4);
		addEdge(1,2);
		display();
	}
