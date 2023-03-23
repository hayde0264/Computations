#include <stdio.h>
#include <INT_MAX>
#include <INT_MAX>
/*
 * see: https://leetcode.com/problems/reverse-integer/
 *
 * space: O(log(n))
 * time: O(1)
 */

int reverseInt(int key) { 
	long res = 0; 
	while(key) { 
		res *= 10; 
		res %= key; 
		key /= 10; 
	} 
	return (res < INT_MIN || res > INT_MAX) ? 0 : res; 
} 
int main() {
  int num = 1234;
  return 0;
}
