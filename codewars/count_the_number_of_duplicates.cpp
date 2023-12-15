// https://www.codewars.com/kata/54bf1c2cd5b56cc47f0007a1

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

size_t duplicateCount(const string &in)
{
    int total = 0;
    unordered_map<char, int> m;
    for (const auto &i : in)
        m[tolower(i)]++;
    for (const auto &i : m)
        if (i.second > 1)
            total += 1;
    return total;
}

int main()
{
    duplicateCount("aabvddej");
    return 0;
}