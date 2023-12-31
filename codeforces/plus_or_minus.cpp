// https://codeforces.com/problemset/problem/1807/A

#include <iostream>

using namespace std;

int main()
{
    int num_of_cases;
    cin >> num_of_cases;

    int input;

    int arr[3];

    for (int i = 0; i < num_of_cases; ++i)
    {
        for (int i = 0; i < 3; ++i)
        {
            cin >> input;
            arr[i] = input;
        }
        int total = arr[2];
        int sub = arr[0] - arr[1];
        int add = arr[0] + arr[1];
        if (sub == total)
            cout << "-" << '\n';
        else
            cout << "+" << '\n';
    }

    return 0;
}