#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 15

void push(int stack[MAX],int *top,int new){
	
	if(*top == MAX-1){
		printf("Stack overFlow!!\n");
		exit(0);
	}else{
		stack[++(*top)] = new;
	}
}

void display(int stack[MAX],int *top){
	
	

	int i;
	
	if(*top == -1){
		printf("Stack UnderFlow!!\n");
		return;
	}
	printf("Stack elements are: \n");
	for(i=*top;i>=0;i--){
		printf("%d\n",stack[i]);
	}
}



int pop(int stack[MAX],int *top){
	
	if(*top == -1){
		printf("Stack UnderFlow!!\n");
		return -1;
	}
	return stack[(*top)--];
	
	
}


void main(){
	int choise;
	int stack[MAX],top = -1;
	int new_elem,x;
	
	
	while(1){
		printf("1  push \n");
		printf("2 - pop \n");
		printf("3 - display\n");
		printf("4 - Exit\n");
		printf("Enter your choise:  \n");
		scanf("%d",&choise);
		
		switch(choise)
		{
			case 1: 
					printf("Enter the element to be pushed into the stack:  \n");
					scanf("%d",&new_elem);
					push(stack,&top,new_elem);
					printf("element %d is pushed into the stack\n",new_elem);
					break;
			
			case 2: x = pop(stack,&top);
					if(x == -1){
						printf("no elements to be deleted from the stack !! \n");
					}else
						printf("element %d is succesfully deleted from the stack \n",x);
					break;
					
			case 3: display(stack,&top);
					break;
					
			case 4: exit(0);
			
			default:
					printf("Wrong input!! :) \n");
		}
		
	}
}

