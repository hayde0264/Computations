// https://open.kattis.com/problems/pet

#include <iostream>

using namespace std;

int main()
{

    int arr[5];
    int grades;

    int total_per_contestant = 0;

    for (int i = 0; i < 5; ++i)
    {
        for (int i = 0; i < 4; ++i)
        {
            cin >> grades;
            total_per_contestant += grades;
        }
        arr[i] = total_per_contestant;
        total_per_contestant = 0;
    }

    int greatest_idx = 0;
    int greatest_total = arr[0];

    for (int i = 0; i < 5; ++i)
    {
        if (arr[i] > greatest_total)
        {
            greatest_idx = i;
            greatest_total = arr[i];
        }
    }

    cout << greatest_idx + 1 << '\n' << greatest_total << '\n';

    return 0;
}