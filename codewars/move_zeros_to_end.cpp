// https://www.codewars.com/kata/52597aa56021e91c93000cb0/train/cpp

#include <iostream>
#include <vector>

using namespace std;

vector<int> move_zeroes(const vector<int> &input)
{
    int total = 0;
    vector<int> v{};
    for (int i = 0; i < input.size(); ++i)
    {
        if (input[i] == 0)
            total++;
        else
            v.push_back(input[i]);
    }
    for (int i = 0; i < total; i++)
        v.push_back(0);
    return v;
}

int main()
{
    move_zeroes(vector<int>{1, 0, 1, 2, 0, 1, 3});
    return 0;
}