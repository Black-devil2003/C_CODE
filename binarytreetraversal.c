#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left,*right;
};
typedef struct node NODE;
NODE *root=NULL;
NODE *create();
void insert();
void inorder(NODE*);
void postorder(NODE*);
void preorder(NODE*);
NODE *create(){
	NODE *new=(NODE*)malloc(sizeof(NODE));
	printf("enter data: ");
	scanf("%d",&new->data);
	new->left=new->right=NULL;
	return new;
}
void insert(){
	NODE *new=create();
	if(root==NULL)
	root=new;
	else{
		NODE *temp=root,*ptr=root;
		while(temp!=NULL){
			ptr=temp;
			if(new->data<temp->data)
			temp=temp->left;
			else
			temp=temp->right;
		}
		if(new->data<ptr->data)
		ptr->left=new;
		else
		ptr->right=new;
	}
}
void inorder(NODE*t){
	if(t!=NULL){
		inorder(t->left);
		printf("%d\t",t->data);
		inorder(t->right);
	}
}
void preorder(NODE*t){
	if(t!=NULL){
		printf("%d\t",t->data);
		preorder(t->left);
		preorder(t->right);
		
	}
}
void postorder(NODE*t){
	if(t!=NULL){
	    postorder(t->left);
		postorder(t->right);
		printf("%d\t",t->data);
	}
}
int main(){
	int ch;
	do{
		printf("1.insert\n2.inorder\n3.preorder\n4.postorder\n");
		printf("enter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
			insert();
			break;
			case 2:
			   if(root==NULL)
			   	printf("Tree is empty");
			   	else{
			   		inorder(root);
			   		printf("\n");
			   		break;
				    }
			   
			case 3:
				if(root==NULL)
			   	printf("Tree is empty");
			   	else{
			   		preorder(root);
			   		printf("\n");
			   		break;
				    }
			    
		    case 4:
		    	if(root==NULL)
			   	printf("Tree is empty");
			   	else{
			   		postorder(root);
			   		printf("\n");
			   		break;
				   }
			   
		    default: exit(0);
		}
	}while(1);
}
