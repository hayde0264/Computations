// https://leetcode.com/problems/merge-strings-alternately/description/?envType=study-plan-v2&envId=leetcode-75

#include <iostream>
#include <string>

using namespace std;

class Solution
{
  public:
    string mergeAlternately(const string &word1, const string &word2)
    {
        string ret_string = "";
        if (word1.size() == word2.size())
        {
            for (int i = 0; i < word1.size(); ++i)
            {
                ret_string.push_back(word1[i]);
                ret_string.push_back(word2[i]);
            }
        }
        else
        {
            string longer = word1;
            if (word1.size() < word2.size())
                longer = word2;

            int diff = 0;
            if (longer == word1)
                diff = word1.size() - word2.size();
            else
                diff = word2.size() - word1.size();
            for (int i = 0; i < longer.size() - diff; ++i)
            {
                ret_string.push_back(word1[i]);
                ret_string.push_back(word2[i]);
            }
            for (int i = longer.size() - diff; i < longer.size(); ++i)
            {
                ret_string.push_back(longer[i]);
            }
        }
        return ret_string;
    }
};

int main()
{
    Solution sol;
    string a = "abcd";
    string b = "pq";
    cout << sol.mergeAlternately(a, b) << '\n';

    return 0;
}