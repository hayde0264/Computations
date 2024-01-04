// https://www.codewars.com/kata/5d5ee4c35162d9001af7d699/train/cpp

#include <iostream>
#include <vector>

using namespace std;

int sum_of_minimums(const vector<vector<int>> &numbers)
{
    vector<int> sums{};
    int min = INT16_MAX;
    for (int i = 0; i < numbers.size(); ++i)
    {
        for (int j = 0; j < numbers[i].size(); ++j)
        {
            if (numbers[i][j] < min)
                min = numbers[i][j];
        }
        sums.push_back(min);
        min = INT16_MAX;
    }
    int total = 0;
    for (const int &i : sums)
        total += i;

    return total;
}

int main()
{
    vector<vector<int>> test = {{7, 9, 8, 6, 2}, {6, 3, 5, 4, 3}, {5, 8, 7, 4, 5}};

    sum_of_minimums(test);
}