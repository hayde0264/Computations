// missing sum = sum of nums - sum of array elements 
// sum of n natural = n(n + 1) / 2 - missing sum 

#include <stdio.h>
int missingNumber(int arr[], int len) { 
	int res = len; 
	for (int i = 0; i != len; i++) { 
		res = res + i - arr[i]; 
	} 
	return res;
} 

int main() { 
	int arr[] = { 0, 1, 3, 4 }; 
	int size = sizeof(arr) / sizeof(arr[0]); 
	printf("%d\n", missingNumber(arr, size));
	return 0;
} 
