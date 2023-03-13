#include <stdio.h>

/*
 * see: https://leetcode.com/problems/reverse-integer/
 *
 * space: O(log(n))
 * time: O(log(n))
*/

class Solution {
	public:
		int reverseInt(int key);
};

int Solution::reverseInt(int key) {
	static int reverse = 0;
	static int base = 1;
	if (key > 0) {
		reverseInt(key / 10);
		reverse += (key % 10) * base;
		base *= 10;
	}
	return reverse;
}
int main() {
	Solution test;
	int num = 1234;
	printf("Before: %d\n After: %d", num, test.reverseInt(num));
	return 0;
}
