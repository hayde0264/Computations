#include <iostream>
#include <vector>
using namespace std;

vector<string> solution(vector<string> inputArray)
{
    vector<string> longest;
    int biggest = 0;
    for (const auto &i : inputArray)
        if (i.size() > biggest)
            biggest = i.size();
    for (const auto &i : inputArray)
        if (i.size() == biggest)
            longest.push_back(i);
    return longest;
}
