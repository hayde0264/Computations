#include <stdio.h>

/* 
 * see: https://www.beecrowd.com.br/judge/en/problems/view/1037
*/ 

int main() 
{ 
	float a; 
	scanf("%f", &a);

	if(a < 0) 
	{ 
		printf("Fora de intervalo\n"); 
	} 
	else if((a >= 0) && (a <= 25.00)) 
	{ 
		printf("Intervalo [0,25)\n"); 
	} 
	else if((a > 25.00) && (a <= 50.00)) 
	{ 
		printf("Intervalo (25,50]\n"); 
	} 
	else 
	{ 
		printf("Intervalo (75,100]"); 
	} 
	return 0; 
} 
