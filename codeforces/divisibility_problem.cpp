// https://codeforces.com/problemset/problem/1328/A

#include <iostream>
using namespace std;

int main()
{
    int a, b, t, mod;
    cin >> t;

    while (t--)
    {

        cin >> a >> b;

        mod = a % b;

        if ((mod == 0))
            cout << 0 << endl;
        else
            cout << (b - mod) << endl;
    }
}