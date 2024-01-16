// https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/description/

#include <iostream>

using namespace std;

class Solution
{
  public:
    vector<int> finalPrices(const vector<int> &prices)
    {
        vector<int> disc{};
        bool has_disc = false;
        for (int i = 0; i < prices.size(); ++i)
        {
            for (int j = i; j < prices.size() - 1; ++j)
            {
                if (prices[i] >= prices[j + 1])
                {
                    has_disc = true;
                    disc.push_back(prices[i] - prices[j + 1]);
                    break;
                }
            }
            if (has_disc == true)
            {
                has_disc = false;
                continue;
            }
            else
                disc.push_back(prices[i]);
        }
        return disc;
    }
};

int main()
{
    Solution sol;
    auto v = sol.finalPrices(vector<int>{10, 1, 1, 6});
    for (const int &i : v)
        cout << i << '\n';
}