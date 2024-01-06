// https://codeforces.com/problemset/problem/1772/A

#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int len = 0;
    cin >> len;

    int iter = 0;

    while (iter < len)
    {
        cin >> a;
        cin >> b;

        cout << a + b << '\n';
        iter++;
    }

    return 0;
}
