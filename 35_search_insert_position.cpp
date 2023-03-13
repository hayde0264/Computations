#include <stdio.h>

#include <chrono>
#include <vector>
using std::vector;
/*
 * see: https://leetcode.com/problems/search-insert-position/description/
 *
 * space: O(1)
 * time:  O(logN)
 */
class Solution {
 public:
  int searchInsert(vector<int>& nums, int target);
};
int Solution::searchInsert(vector<int>& nums, int target) {
  int low = 0, high = nums.size() - 1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (nums[mid] == target) return mid;
    if (nums[mid] > target)
      high = mid - 1;
    else
      low = mid + 1;
  }
  return low;
}
int main() {
  vector<int> v{1, 2, 3};
  Solution test;
  int result = test.searchInsert(v, 2);
  printf("%d\n", result);
  return 0;
}
