#include <stdio.h>

int fib(int i) 
{ 
	if(i > 1) 
	{ 
		return fib(i - 1) + fib(i - 2); 
	} 
	else 
	{ 
		return i; 
	} 
} 
int main() 
{ 
	int a = 3; 
	printf("%d\n", fib(a)); 
	return 0;
} 
