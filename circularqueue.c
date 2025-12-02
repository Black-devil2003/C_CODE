#include<stdio.h>
#include<stdlib.h>
#define size 10
int queue[size],ch,ele,i,front=-1,rear=-1;
void insert();
void delete();
void display();
main(){
	printf("\n\t\t MAIN MENU");
	printf("\n\t 1.INSERT");
	printf("\n\t 2.DELETE");
	printf("\n\t 3.DISPLAY");
	printf("\n\t 4.EXIT\n");	
do{
	printf("Enter your choice: ");
	scanf("%d",&ch);
	switch(ch){
		case 1: insert();
		break;
		case 2: delete();
		break;
		case 3: display();
		break;
		case 4: exit(0);
	}
}while(ch<=4);
}
void insert()
{
	if(rear==(size-1)){
		printf("QUEUE IS FULL\n");
	}else{
		printf("Enter the element: ");
		scanf("%d",&ele);
		if(front==-1)
		{
			front=0;
		}
		rear++;
		queue[rear]=ele;
	}	
}
void delete(){
	if(front==-1||front>rear){
		printf("QUEUE IS EMPTY\n");
	}
	else{
		ele=queue[front];
		printf("Deleted element is %d\n",ele);
		front++;
	}
}
void display(){
	if(front==-1||front>rear){
		printf("QUEUE IS EMPTY\n");
	}
	else{
		for(i=front;i<=rear;i++){
			printf("\t\t%d\n",queue[i]);
		}
	}
}
