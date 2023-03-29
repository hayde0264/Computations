#include <stdio.h>


int main() { 
	int arr[] = { 1, 2, 3, 4, 5 }; 
	int i, j; 
	int len = sizeof(arr) / sizeof(arr[0]); 

	puts("The original array elements are...\n"); 

	for (i = 0; i < len; i++)  
		printf("[%d] = %d \n", i, arr[i]);  
	j = 3;

	while (j < len) { 
		arr[j - 1] = arr[j]; 
		j += 1; 
	} 

	len -= 1; 

	puts("The array elements after deletion...\n"); 

	for (i = 0; i < len; i++) 
		printf("[%d] = %d\n", i, arr[i]); 

	return 0; 
}
