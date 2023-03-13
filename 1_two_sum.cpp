#include <vector>
#include <unordered_map>
#include <iostream>
using std::vector, std::unordered_map;
/*
 * see: https://leetcode.com/problems/two-sum/
 *
 * space: O(1)
 * time:  O(n)
*/
class Solution
{
	public:
		vector<int> twoSum(vector<int>& nums, int target);
};
vector<int> Solution::twoSum(vector<int> &nums, int target)
{
	unordered_map<int, int> map;
	vector<int> res;
	int len = nums.size();
	for(int i = 0; i < len; i++)
	{
		int diff = len - nums[i];
		if(map.find(nums[i]) != map.end() && map.find(diff)->second != i)
		{
			res.push_back(i);
			res.push_back(map.find(diff)->second);
			return res;
		}
		map[nums[i]] = i;
	}
	return res;
}
