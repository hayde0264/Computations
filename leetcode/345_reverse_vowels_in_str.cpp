// https://leetcode.com/problems/reverse-vowels-of-a-string/description/?envType=study-plan-v2&envId=leetcode-75

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
  public:
    string reverseVowels(string &s)
    {
        int j = 1;
        int i = 0;
        while (i < s.size())
        {
            // if neither are on vowel
            if ((s[i] != 'a' || s[i] != 'e' || s[i] != 'i' || s[i] != 'o' || s[i] != 'u') &&
                (s[j] != 'a' || s[j] != 'e' || s[j] != 'i' || s[j] != 'o' || s[j] != 'u'))
            {
                ++i;
                ++j;
            }
            // if i is on vowel but j isn't
            else if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') &&
                     (s[j] != 'a' || s[j] != 'e' || s[j] != 'i' || s[j] != 'o' || s[j] != 'u'))
            {
                j++;
            }
            // if j is on vowel and i isn't
            else if ((s[i] != 'a' || s[i] != 'e' || s[i] != 'i' || s[i] != 'o' || s[i] != 'u') &&
                     (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'))
            {
                ++i;
            }
            else
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                ++i;
                ++j;
            }
        }
        return s;
    }
};

int main()
{
    Solution sol;

    string a = "hello";

    cout << sol.reverseVowels(a) << '\n';

    return 0;
}