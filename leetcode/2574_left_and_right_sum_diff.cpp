// https://leetcode.com/problems/left-and-right-sum-differences/description/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
  public:
    vector<int> leftRightDifference(const vector<int> &nums)
    {
        vector<int> empty_vec{0};
        if (nums.size() == 1)
            return empty_vec;

        vector<int> right_sum{};
        vector<int> left_sum{};
        left_sum.push_back(0);

        for (int i = 0; i < nums.size() - 1; ++i)
        {
            left_sum.push_back(nums[i] + nums[i + 1]);
        }

        for (int i = nums.size() - 1; i > 0; --i)
        {
            right_sum.push_back(nums[i] + nums[i - 1]);
        }

        right_sum.push_back(0);

        vector<int> ret_vector{};

        for (int i = 0; i < nums.size(); ++i)
        {
            ret_vector.push_back(abs(left_sum[i]) - abs(right_sum[i]));
        }

        return ret_vector;
    }
};

int main()
{
    Solution sol;
    vector<int> v = sol.leftRightDifference(vector<int>{10, 4, 8, 3});

    for (const int &i : v)
        cout << i << '\n';
}