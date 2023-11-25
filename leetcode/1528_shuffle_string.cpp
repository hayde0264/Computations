#include <iostream>
using namespace std;

class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        string ret = s;
        for (int i = 0; i < s.length(); i++)
        {
            ret[indices[i]] = s[i];
        }
        return ret;
    }
};