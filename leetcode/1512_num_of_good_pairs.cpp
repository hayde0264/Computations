// https://leetcode.com/problems/number-of-good-pairs/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
  public:
    int numIdenticalPairs(const vector<int> &nums)
    {
        int total = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            for (int j = i + 1; j < nums.size(); ++j)
            {
                if (nums[j] == nums[i] && i < j)
                    total++;
            }
        }
        return total;
    }
};

int main()
{
    Solution sol;

    cout << sol.numIdenticalPairs(vector<int>{1, 2, 3});

    return 0;
}