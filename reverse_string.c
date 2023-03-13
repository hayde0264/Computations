#include <stdio.h>
#include <string.h>

void reverse_string(char *str) 
{ 
	int start = 0, end = strlen(str) - 1; 
	while(start < end) 
	{ 
		int temp = str[end]; 
		str[end] = str[start]; 
		str[start] = temp; 
		start++; 
		end--; 
	} 
	puts(""); 
}
int main() 
{
	char name; 
	puts("Please enter your name...\n");
	scanf("%s", &name); 
	reverse_string(&name); 
	printf("Your name reversed is %s\n", &name); 
	return 0; 
} 
