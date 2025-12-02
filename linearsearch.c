#include<stdio.h>
int main()
{
	int a[20],n,i,key,found=0,pos;
	printf("How many elements? ");
	scanf("%d",&n);
	printf("enter array elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter key elements: ");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(key==a[i]){
			found=1;
			pos=i;
		}
	}
	if(found==1){
		printf("Elements found at position: %d",pos);
	}else{
		printf("Error!Elements not found!");
	}
	return 0;
}
