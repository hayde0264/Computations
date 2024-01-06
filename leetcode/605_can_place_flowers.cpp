// https://leetcode.com/problems/can-place-flowers/description/?envType=study-plan-v2&envId=leetcode-75

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
  public:
    bool canPlaceFlowers(const vector<int> &flowerbed, int n)
    {
        int possible_places = 0;

        for (int i = 0; i < flowerbed.size(); ++i)
        {
            int zero_count = 0;
            if (flowerbed[i] == 0)
                zero_count++;
            if (zero_count == 3)
            {
                possible_places++;
                zero_count = 0;
            }
        }
        if (possible_places >= n)
            return true;
        else
            return false;
    }
};

int main()
{
    Solution sol;

    cout << sol.canPlaceFlowers(vector<int>{1, 0, 0, 0, 1}, 1) << '\n';

    return 0;
}