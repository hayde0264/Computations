#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(const vector<int> &nums)
    {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]]++;
        for (const auto &i : m)
            if (i.second == 2)
                return true;
        return false;
    }
};

int main()
{
    Solution sol;
    vector<int> v{1, 2, 3, 3};
    cout << sol.containsDuplicate(v) << '\n';
    return 0;
}