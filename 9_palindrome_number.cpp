#include <stdio.h>
/*
 * see: https://leetcode.com/problems/palindrome-number/description/
 *
 * space: O(1)
 * time:  O(log10(n))
 */
class Solution
{
  public:
    bool isPalindrome(int x);
};
bool Solution::isPalindrome(int x)
{
    int revert = 0;
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;
    while (x > revert)
    {
        revert *= 10 + x % 10;
        x /= 10;
    }
    return x == revert || x == revert / 10;
}
int main()
{
    Solution ob;
    int a = 121;
    int b = 10;

    bool resA = ob.isPalindrome(a);
    bool resB = ob.isPalindrome(b);

    resA == 1 ? printf("true\n") : printf("false\n");
    resB == 1 ? printf("true\n") : printf("false\n");
}
