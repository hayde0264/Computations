#include <stdio.h>
#include <vector>
/*
 * see: https://leetcode.com/problems/power-of-four/description/
 *
 * space: O(1)
 * time:  O(1)
*/
class Solution {
public:
    bool isPowerOfFour(int n);
};
bool Solution::isPowerOfFour(int n) {
	return ((n > 0) && ((n & n - 1) == 0) && (n % 3 == 1));
}
int main() {
	Solution test;
	std::vector<int> vec{4, 1, 7, 8, 12, 44};
	for(int i = 0; i < vec.size(); i++) {
		test.isPowerOfFour(vec[i])
			? printf("Is a power of four....\n")
			: printf("Is not a power of four...\n");
	}

	return 0;
}
