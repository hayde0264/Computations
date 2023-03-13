#include <iostream>
#include <string.h>
#include <string>

using std::string; 

/* 
 * space: O(1)   
 * time:  O(n) 
*/ 

void reverseString(string &str) 
{ 
	int len = str.length(); 
	int i = len; 
	while(i--) 
	{ 
		std::cout << str[i];  
	} 
}
int main() 
{ 
	string a = "hayden"; 
	reverseString(a);
	return 0; 
} 
