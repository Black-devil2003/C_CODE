#include<stdio.h>
int main()
{
	int num,sum=0;
	printf("enter 5digit number: ");
	scanf("%d",&num);
	while(num!=0){
		sum+=num%10;
		num=num/10;
	}
	printf("sum of 5 digit number: %d",sum);
	return 0;
}
