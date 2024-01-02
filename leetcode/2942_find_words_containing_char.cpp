// https://leetcode.com/problems/find-words-containing-character/description/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
  public:
    vector<int> findWordsContaining(const vector<string> &words, char x)
    {
        vector<int> v{};
        int spot = 0;
        for (int i = 0; i < words.size(); ++i)
        {
            for (const auto &ch : words[i])
            {
                if (ch == x)
                {
                    v.push_back(spot);
                    break;
                }
            }
            spot++;
        }
        return v;
    }
};