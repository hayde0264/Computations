#include <atomic>
#include <cstdio>
#include <vector>
#include <algorithm>
/*
 * see: https://leetcode.com/problems/move-zeroes/description/
 *
 * space: O(1)
 * time:  O(n)
*/
class Solution {
	public:
		void moveZeros(std::vector<int> &arr);
};
void Solution::moveZeros(std::vector<int> &arr) {
	for(int i = 0, curr = 0; curr < arr.size(); curr++) {
		if(arr[curr] != 0) {
			std::swap(arr[i++], arr[curr]);
		}
	}
}
int main() {
	Solution test;
	std::vector<int> v{1,1,1,0,0,0,0,1,1,1};
	test.moveZeros(v);
	for(int i = 0; i < v.size(); i++) {
		printf("%d, ", v[i]);
	}
	return 0;
}
