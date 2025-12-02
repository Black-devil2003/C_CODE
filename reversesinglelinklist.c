#include<stdio.h>
#include<stdlib.h>
#define NODE struct node
NODE
{
int n;
NODE *next;
};
NODE* reverseList(NODE *head)
{
	NODE *prev=NULL,*current=head,*next=NULL;
	 while (current != NULL) {
        next = current->next;  // Store next node
        current->next = prev;  // Reverse pointer
        prev = current;        // Move prev to current
        current = next;        // Move to next node
    }
    return prev;  // New head of reversed list
}
NODE *p,*q,*head='\0';
int main()
{
int no,i,ch;
printf("enter no.of nodes:");
scanf("%d",&no);
for(i=1;i<=no;i++)
{
 p=(NODE*)malloc(sizeof(NODE));
 printf("enter the node data:");
 scanf("%d",&p->n);
  p->next='\0';
 if(head=='\0')
 {
 head=p;
 q=p;
 }
 else
 {
 q->next=p;
 q=p;
 }
}
printf("original List is:");
display();
head=reverseList(head);
printf("\nreverse List is:");
display();
}
display() {
 if(head=='\0')
 printf("Linked List is empty");
 else
 {
  q=head;
 while(q!='\0')
 {
 printf("%d->",q->n);
 q=q->next;
 }
 printf("NULL");
 }
}

