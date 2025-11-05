#include<stdio.h>
int main()
{
	int n,i,key,pos=0,mid=0,low=0;
	printf("enter n value");
	scanf("%d",&n);
	int a[n];
	int high=n-1;
	printf("enter array elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter key");
	scanf("%d",&key);
	while(low<high){
		mid=(low+high)/2;
		if(key==a[mid]){
			pos=mid;
			break;
		}
		else if(key<a[mid]){
			high=mid-1;
		}else{
			low=mid+1;
		}
	}
	printf("element found at position %d",pos);
	return 0;
}
