#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOW 1 
#define HIGH 32000 

int main() 
{ 
	int random, i; 
	time_t seconds; 
	time(&seconds); 
	srand(seconds); 
	for(i = 0; i < 10; i++) 
	{ 
		random = rand() % (HIGH - LOW + 1) + LOW; 
		printf("%d\n", random); 
	} 
	puts("..."); 
	return 0; 
} 
