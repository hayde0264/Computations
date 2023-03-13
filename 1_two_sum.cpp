#include <iostream>
#include <unordered_map>
#include <vector>

/*
 * see: https://leetcode.com/problems/two-sum/
 *
 * space: O(1)
 * time:  O(n)
 */

std::vector<int> twoSum(std::vector<int>& nums, int target) {
  std::unordered_map<int, int> map;
  std::vector<int> res;
  int len = nums.size();
  for (int i = 0; i < len; i++) {
    int diff = len - nums[i];
    if (map.find(nums[i]) != map.end() && map.find(diff)->second != i) {
      res.push_back(i);
      res.push_back(map.find(diff)->second);
      return res;
    }
    map[nums[i]] = i;
  }
  return res;
}
