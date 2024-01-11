// https://www.codewars.com/kata/55ecd718f46fba02e5000029/train/cpp

#include <iostream>

using namespace std;

#include <vector>

vector<int> between(int start, int end)
{
    vector<int> v{};

    if (start == end)
    {
        v.push_back(start);
        return v;
    }
    else
    {
        v.push_back(start);
        for (int i = start + 1; i < end; ++i)
        {
            v.push_back(i);
        }
        v.push_back(end);
    }
    return v;
}
