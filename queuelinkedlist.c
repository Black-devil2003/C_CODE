#include<stdio.h>
#include<stdlib.h>
#define NODE struct node
NODE
{
	int n;
	NODE *next;
};
NODE *front='\0',*rear='\0',*p;
void main(){
	int ch;
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
insert(){
	p=(NODE*)malloc(sizeof(NODE));
	printf("Enter the node data:");
	scanf("%d",&p->n);
	if(front=='\0'){
		p->next='\0';
		front=p;
		rear=p;
	}
	else{
		rear->next=p;
		p->next='\0';
		rear=p;
	}
}
delete(){
	if(front=='\0'){
		printf("Queue is empty");
	}else{
		p=front;
		printf("\n Deleted element is:%d",p->n);
		front=front->next;
		free(p);
	}
}
display()
{
	if(front=='\0'){
		printf("\nQueue is empty");
	}else{
		printf("Queue is using ?linked list: ");
		for(p=front;p!='\0';p=p->next){
			printf("%d->",p->n);
			printf("NULL");
		}
	}
}
