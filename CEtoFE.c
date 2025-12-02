#include<stdio.h>
int main()
{
	float celsius,fahrenhit;
	printf("enter celsius: ");
	scanf("%f",&celsius);
	fahrenhit=(celsius*1.8)+32;
	printf("Fahrenhit is %.3f",fahrenhit);
	return 0;
}
