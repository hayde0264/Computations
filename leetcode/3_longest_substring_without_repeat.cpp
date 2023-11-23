/*
 * see:
 * https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
 *
 * space: O(1)
 * time:  O(n)
 */

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::max;
using std::string;

class Solution
{
  public:
    int lengthOfLongestSubstring(string str);
};
int Solution::lengthOfLongestSubstring(string str)
{
    int i = 0, j = 0, max_len = 0;
    int len = str.length() - 1;

    if (len == 0)
        return 0;
    bool visited[256] = {false};

    while (i < len && j < len)
    {
        if (visited[str[j]] == false)
        {
            visited[str[j]] = true;
            j += 1;
            max_len = max(max_len, j - i);
        }
        else
        {
            visited[str[i]] = false;
            i += 1;
        }
    }
    return max_len;
}

int main()
{
    string s;
    cin >> s;
    Solution sol;
    int out = sol.lengthOfLongestSubstring(s);
    cout << "The length of the longest substring is " << out << '\n';
    return 0;
}
