// https://codeforces.com/problemset/problem/1676/A

#include <iostream>
#include <set>

using namespace std;

void run()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        string s;
        cin >> s;
        int s1_total = 0;
        int s2_total = 0;
        for (int i = 0; i < 3; ++i)
        {
            s1_total += s[i];
        }
        for (int i = 3; i < 6; ++i)
        {
            s2_total += s[i];
        }
        if (s1_total - s2_total == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
        s1_total = 0;
        s2_total = 0;
    }
}

int main()
{
    run();
    return 0;
}