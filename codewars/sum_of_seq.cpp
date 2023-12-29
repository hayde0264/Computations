// https://www.codewars.com/kata/586f6741c66d18c22800010a/train/cpp

#include <iostream>

using namespace std;

int sequenceSum(const int &start, const int &end, const int &step)
{
    int total = 0;
    if (start > end)
        return 0;
    for (int i = start; i <= end; i += step)
    {
        total += i;
    }
    return total;
}
