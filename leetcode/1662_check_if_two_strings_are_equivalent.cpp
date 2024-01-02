// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/description/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
  public:
    bool arrayStringsAreEqual(const vector<string> &word1, const vector<string> &word2)
    {

        string s1 = "";
        string s2 = "";

        for (int i = 0; i < word1.size(); ++i)
            for (int j = 0; j < word1[i].size(); ++j)
                s1 += word1[i][j];

        for (int i = 0; i < word2.size(); ++i)
            for (int j = 0; j < word2[i].size(); ++j)
                s2 += word2[i][j];

        if (s1 == s2)
            return true;
        else
            return false;
    }
};
