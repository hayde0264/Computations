// see: https://leetcode.com/problems/valid-palindrome/

#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

using std::isupper;
using std::reverse;
using std::string;
using std::tolower;

class Solution
{
  public:
    bool isPalindrome(string str)
    {
        string res;
        for (auto i : str)
        {
            if (isupper(i))
            {
                i = tolower(i);
            }
            if (isalnum(i))
            {
                str.push_back(i);
            }
        }
        string rev = str;
        reverse(rev.begin(), rev.end());
        return res == rev;
    }
};
