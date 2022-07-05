	#include<stdio.h>
	int arr[100][100];
	int vertices=5;
	void addEdge(int a,int b){
		arr[a][b]=1;
		arr[b][a]=1;
	}
	void display(){
		int i,j,n=vertices;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%d ",arr[i][j]);
			}
			printf("\n");
		}
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
