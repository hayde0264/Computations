#include <string>
#include <vector>
using std::string, std::vector;
/*
 * see: https://leetcode.com/problems/length-of-last-word/description/
 *
 * space: O(1)
 * time:  O(n)
 */
class Solution
{
  public:
    int lengthOfLastWord(string s);
};
int Solution::lengthOfLastWord(string s)
{
    int len = 0, tail = s.length() - 1;
    while (tail >= 0 && s[tail] == ' ')
        tail--;
    while (tail >= 0 && s[tail] != ' ')
    {
        len++;
        tail--;
    }
    return len;
}
int main()
{
    Solution ob;
    string s = "some words";
    int result = ob.lengthOfLastWord(s);
    printf("%d\n", result);
    return 0;
}
