// https://www.codewars.com/kata/5526fc09a1bbd946250002dc/train/cpp

#include <unordered_map>
#include <iostream>
#include <vector>

using namespace std;

int FindOutlier(const vector<int> &arr)
{
    int odds = 0;
    int evens = 0;
    int to_find = 0;
    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] % 2 == 0)
            evens++;
        else
            odds++;
    }
    if (odds == 1)
        to_find = 1;
    else
        to_find = 2;

    for (int i = 0; i < arr.size(); ++i)
    {
        if (to_find == 1 && arr[i] % 2 != 0)
            return arr[i];
        if (to_find == 2 && arr[i] % 2 == 0)
            return arr[i];
    }
    return 0;
}

int main()
{
    vector<int> v1{2, 4, 0, 100, 4, 11, 2602, 36};
    vector<int> v2{160, 3, 1719, 19, 11, 13, -21};

    cout << FindOutlier(v1) << '\n';
    cout << FindOutlier(v2) << '\n';

    return 0;
}