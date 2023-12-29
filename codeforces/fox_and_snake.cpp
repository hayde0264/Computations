// https://codeforces.com/problemset/problem/510/A

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int rows;
    int columns;
    cin >> rows;
    cin >> columns;

    string first = "";

    for (int i = 1; i < columns * rows; ++i)
    {
        if (i - rows == 0 || i % rows == 0)
            first += '\n';
        else
            first += "#";
    }

    cout << first;
}