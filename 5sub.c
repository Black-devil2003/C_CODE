//Take marks of 5 subjects in integers, find the total in integer and average in float.
#include<stdio.h>
#include<math.h>
int main()
{
	int m,e,p,com,bio,total;
	float average;
	printf("enter subjects marks: ");
	scanf("%d%d%d%d%d",&m,&e,&p,&com,&bio);
	total=m+e+p+com+bio;
	printf("total marks: %d\n",total);
	average=total/5;
	printf("the average is: %.2f",average);
	return 0;
}
