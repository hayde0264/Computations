/*
    Given int array, return true if any value appears at least twice
    Ex. nums = [1,2,3,1] -> true, nums = [1,2,3,4] -> false

    If seen num previously then has dupe, else insert into hash set

    Time: O(n)
    Space: O(n)
*/

#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution
{
  public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> set;
        for (int i = 0; i < nums.size(); i++)
        {
            if (set.find(nums[i]) != set.end())
            {
                return true;
            }
            set.insert(nums[i]);
        }
        return false;
    }
};

int main()
{
    vector<int> vec{1, 1, 2, 3};
    Solution sol;
    std::cout << sol.containsDuplicate(vec);
}
