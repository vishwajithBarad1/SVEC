	#include<stdio.h>
	int queue[6],len=0;
	int front=0,rear=-1;
	void enqueue(int num){
		if(len<6){
			rear=(rear+1)%6;
			queue[rear]=num;
			len++;
		}
		else{
			printf("queue is full\n");
		}
	}
	int dequeue(){
		int num=queue[front];
		if(len>0){
			front=(front+1)%6;
			len--;
			return num;
		}
		else
		printf("stack is empty\n");
		
	}
	void display(){
		int i=front,n=len;
		while(n){
			printf("%d ",queue[i%6]);
			i++;
			n--;
		}
	}
	void main(){
		enqueue(10);
		enqueue(20);
		enqueue(30);
		enqueue(40);
		enqueue(50);
		enqueue(60);
		enqueue(70);
		enqueue(80);
		dequeue();
		dequeue();
		display();
	}
