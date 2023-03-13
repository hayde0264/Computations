#include <stdio.h>

/* 
 * see: https://www.spoj.com/problems/CHITEST1/ 
*/ 
int main() 
{ 
	int testCases, b, c; 
	scanf("%d", &testCases); 
	int arr[testCases]; 

	for(int i = 0; i < testCases; i++)
	{
		scanf("%d %d", &b, &c); 
		arr[i] = b + c; 
	}
	for(int i = 0; i < testCases; i++) 
	{ 
		printf("%d\n", arr[i]); 
	} 
	return 0;


} 
