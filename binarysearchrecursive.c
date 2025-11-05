#include<stdio.h> 
int binary(int arr[], int key, int low, int high); 
int main() 
{ 
 int a, low = 0, key,i; 
 printf("Enter Size of array: "); 
 scanf("%i", &a); 
 int high = a - 1; 
 int arr[a]; 
 printf("Enter Elements: "); 
 for(i = 0; i < a; i++) 
 scanf("%i", &arr[i]); 
 printf("Enter Key: "); 
 scanf("%i", &key); 
 int result = binary(arr, key, low, high); 
 if(result == -1) 
 { 
  printf("Element not found"); 
  return 0; 
 } 
 printf("Element found at index: %i", result); 
} 
int binary(int arr[], int key, int low, int high) 
{ 
 int mid = (low + high)/ 2; 
if(low > high) 
return -1; 
if(arr[mid] == key) 
return mid; 
else if(arr[mid] > key) 
return binary(arr, key, low, mid - 1); 
else  
return binary(arr, key, mid + 1, high); 
} 
