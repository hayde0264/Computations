// https://www.codewars.com/kata/5abd66a5ccfd1130b30000a9/train/cpp
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

pair<int, int> rowWeights(const vector<int> &weights)
{
    int first = 0;
    int second = 0;

    for (int i = 0; i < weights.size(); ++i)
    {
        if (i % 2 == 0)
            first += weights[i];
        else
            second += weights[i];
    }

    return {first, second};
}

int main()
{
    vector<int> t{13, 27, 49};
    auto first = rowWeights(t).first;
    auto second = rowWeights(t).second;

    cout << first << '\t' << second << '\n';

    return 0;
}