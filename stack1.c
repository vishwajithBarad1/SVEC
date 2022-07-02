	#include<stdio.h>
	int stack[100];
	int size;
	int top=-1;
	void display(){
		int i;
		for(i=top;i>=0;i--){
			printf("%d\n",stack[i]);
		}
	}
	void push(int n){
		if(top<size-1){
			top++;
			stack[top]=n;
		}
		else{
			printf("\nstack is full");}
	}
	int pop(){
		if(top!=-1)
			return stack[top--];
		else
			printf("stack is empty\n");
	}
    	int isFull(){
    	return top==(size-1)?1:0;
	}
	int isEmpty(){
		return top==-1?1:0;
	}
	int peek(){
		if(top!=-1)
			return stack[top];
		printf("stack is empty\n");
	}
	void main(){
		printf("size of the stack: ");
		scanf("%d",&size);
		int op,num;
			printf("1.push 2.pop 3.isFull 4.isEmpty 5.peek 6.display 7.EXIT\n");
		do{
			printf("choose option:");
			scanf("%d",&op);
			switch (op){
				case 1:
					printf("element: ");
					scanf("%d",&num);
					push(num);
					break;
				case 2:
					printf("%d\n",pop());
					break;
				case 3:
					if(isFull())
						printf("stack is full\n");
					else
						printf("stack is not full\n");
					break;
				case 4:
					if(isEmpty())
						printf("stack is empty\n");
					else
						printf("stack is not empty\n");
					break;
				case 5:
					printf("%d\n",peek());
					break;
				case 6:
					display();
					break;
				case 7:
					break;
				default:
					printf("wrong option choosen\n");
			}
		}while(op!=7);
	}

