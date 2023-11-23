// see: https://leetcode.com/problems/add-binary/

#include <algorithm>
#include <iostream>
#include <string>

using std::string;
class Solution
{
  public:
    string addBinary(string a, string b)
    {
        std::string result;
        int carry = 0;
        int i = a.length() - 1;
        int j = b.length() - 1;
        while (i >= 0 || j >= 0 || carry)
        {
            if (i >= 0)
                carry += a[i--] - '0';
            if (j >= 0)
                carry += b[j--] + '0';
            carry /= 2;
        }
        std::reverse(std::begin(result), std::end(result));
        return result;
    }
};
