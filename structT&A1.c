#include<stdio.h>
struct student{
	char name[50];
	int marks;
	
};
int main()
{
	int n,i;
	struct student s[100];
	float average;
	int total=0;
	printf("enter the student number: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
	printf("enter the name of the student: ",i+1);
	scanf("%s",s[i].name);
	printf("enter the marks of the student: ",i+1);
	scanf("%d",&s[i].marks);
	total+=s[i].marks;
	}
		
	average=(float)total/n;
	printf("Total is: %d\n",total);
	printf("Average is: %.2f",average);
	return 0;
}
