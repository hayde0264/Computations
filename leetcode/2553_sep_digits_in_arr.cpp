// https://leetcode.com/problems/separate-the-digits-in-an-array/description/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
  public:
    vector<int> separateDigits(vector<int> &nums)

    {
        vector<string> v_str{};

        for (int i = 0; i < nums.size(); ++i)
        {
            v_str.push_back(to_string(nums[i]));
        }
        nums.clear();

        for (int i = 0; i < v_str.size(); ++i)
        {

            for (int j = 0; j < v_str[i].size(); ++j)
            {
                char c = v_str[i][j] - '40';
                int current = atoi(&c);
                nums.push_back(c);
            }
        }
        return nums;
    }
};

int main()
{

    Solution sol;

    vector<int> v{7, 1, 3, 9};

    sol.separateDigits(v);

    for (const int &i : v)
        cout << i << '\t';

    return 0;
}