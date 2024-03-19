#include <iostream>
#include <vector>

using namespace std;

int getAbsSum(const vector<int> &arr)
{
    vector<int> abs;
    int total = 0;
    for (int i = 0; i < (int)arr.size(); ++i)
    {
        if (arr[i] < 0)
            abs.push_back(-arr[i]);
        else
            abs.push_back(arr[i]);
    }

    for (const auto &i : abs)
        total += i;
    return total;
}
