#include <iostream>
using namespace std;

class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        vector<pair<int, string>> vp;
        for (int i = 0; i < heights.size(); i++)
        {
            vp.push_back({heights[i], names[i]});
        }
        sort(vp.begin(), vp.end());
        vector<string> ans;
        for (auto gf : vp)
        {
            ans.push_back(gf.second);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};