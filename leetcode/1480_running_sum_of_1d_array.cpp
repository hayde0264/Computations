#include <stdio.h>

#include <cstdio>
#include <vector>
/*
 * see: https://leetcode.com/problems/running-sum-of-1d-array/
 *
 * space: O(n)
 * time:  O(1)
 */
class Solution
{
  public:
    std::vector<int> runningSum(std::vector<int> &nums);
};
std::vector<int> Solution::runningSum(std::vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] += nums[i - 1];
    }
    return nums;
}
