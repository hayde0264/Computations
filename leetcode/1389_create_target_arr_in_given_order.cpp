// https://leetcode.com/problems/create-target-array-in-the-given-order/description/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
  public:
    vector<int> createTargetArray(const vector<int> &nums, const vector<int> &index)
    {
        vector<int> ret{};
        for (int i = 0; i < nums.size(); ++i)
        {
            auto pos = ret.cbegin() + index[i];
            ret.insert(pos, nums[i]);
        }
        return ret;
    }
};

int main()
{
    vector<int> n{0, 1, 2, 3, 4};
    vector<int> i{0, 1, 2, 2, 1};

    Solution sol;

    vector<int> v = sol.createTargetArray(n, i);

    for (const int &i : v)
        cout << i << '\t';

    return 0;
}