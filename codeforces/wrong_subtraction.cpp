// https://codeforces.com/problemset/problem/977/A

#include <iostream>

using namespace std;

int main()
{
    int num;
    int sub;
    cin >> num;
    cin >> sub;

    for (int i = 0; i < sub; ++i)
    {
        int last = num % 10;
        if (last == 0)
        {
            num /= 10;
        }
        else
        {
            num -= 1;
        }
    }

    cout << num << '\n';
}