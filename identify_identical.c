#include <stdio.h>

/* 
 * space: O(1)  
 * time:  O(n2) 
*/ 
void identify_identical(int values[], int len) 
{ 
	int i, j; 
	for(i = 0; i < len; i++) 
	{ 
		for(j = i + 1; j < len; j++) 
		{ 
			if(values[i] == values[j]) 
			{ 
				printf("Twin integers found...\n"); 
				return;
			} 
		}
	} 
	printf("No two integers are alike...\n"); 
} 
int main() 
{ 
	int a[3] = {1,2,3};
	int b[3] = {1,1,2}; 

	identify_identical(a,3); 
	identify_identical(b,3); 

	return 0; 
} 
