#include<stdio.h>
int main()
{
	int n,i,j,min,temp;
	printf("enter the size of array");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}
