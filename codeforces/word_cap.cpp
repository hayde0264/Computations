// https://codeforces.com/problemset/problem/281/A

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string in;
    cin >> in;
    if (in[0] >= 65 && in[0] <= 90)
        cout << in;
    else
    {
        in[0] = in[0] - 32;
        cout << in;
    }
}
