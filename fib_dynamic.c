#include <stdio.h>


int fib(int n) 
{ 
	int arr[n + 1]; 
	int i; 

	arr[0] = 0; 
	arr[1] = 1; 

	for(int i = 2; i <= n; i++) 
	{ 
		arr[i] = arr[i - 1] + arr[i - 2]; 
	} 

	return arr[n];
} 
int main() 
{ 
	int a = 3; 
	printf("%d\n", fib(a)); 
	return 0; 
} 
