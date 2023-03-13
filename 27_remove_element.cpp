#include <cstdio>
#include <vector>
/*
 * see: https://leetcode.com/problems/remove-element/description/
 *
 * space: O(1)
 * time:  O(n)
*/
class Solution {
	public:
		int removeElement(std::vector<int> &nums, int key);
};
int Solution::removeElement(std::vector<int> &nums, int key) {
	int j = 0;
	for(int i = 0; i < nums.size(); i++) {
		if(nums[i] != key) nums[j++] = nums[i];
	}
	return j;
}
