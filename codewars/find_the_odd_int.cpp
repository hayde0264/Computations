// https://www.codewars.com/kata/54da5a58ea159efa38000836/train/cpp

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int findOdd(const std::vector<int> &numbers)
{
    unordered_map<int, int> m;
    for (const int &num : numbers)
        m[num]++;
    for (const auto &i : m)
    {
        if (i.second % 2 != 0)
            return i.first;
    }
    return 0;
}

int main()
{
    vector<int> v{1, 1, 2};
    cout << findOdd(v);
    return 0;
}