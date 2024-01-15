// https://codeforces.com/problemset/problem/467/A

#include <iostream>

using namespace std;

void run()
{
    int rooms;
    cin >> rooms;
    int possible = 0;

    int first = 0;
    int second = 0;
    while (rooms--)
    {
        for (int i = 0; i < 2; i++)
        {
            int num;
            cin >> num;
            if (i == 0)
                first = num;
            else
                second = num;
        }
        if (second - first >= 2)
            possible++;
        first = 0;
        second = 0;
    }
    cout << possible << '\n';
}

int main()
{
    run();
    return 0;
}