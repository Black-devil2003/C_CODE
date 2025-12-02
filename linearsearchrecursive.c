#include<stdio.h> 
int recursion(int n, int arr[], int key, int i); 
int main() 
{ 
 int a, key,i; 
 printf("Enter size of array: "); 
 scanf("%i", &a); 
 int arr[a]; 
 printf("Enter Elements: "); 
 for(i = 0; i < a; i++) 
 scanf("%i", &arr[i]); 
 printf("Enter Key: "); 
scanf("%i", &key); 
int result = recursion(a, arr, key, 0); 
if(result == -1) 
{ 
printf("Element not found"); 
return 0; 
} 
printf("Element found at index: %i", result); 
} 
int recursion(int n, int arr[], int key, int i) 
{ 
if(i == n) 
{ 
return -1; 
} 
if(arr[i] == key) 
return i; 
else 
return recursion(n, arr, key, i + 1); 
}
