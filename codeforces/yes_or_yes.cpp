// https://codeforces.com/problemset/problem/1703/A

#include <iostream>

using namespace std;

int main()
{
    int len = 0;
    cin >> len;

    string in = "";

    bool correct = true;

    for (int i = 0; i < len; ++i)
    {
        cin >> in;
        for (int j = 0; j < in.size(); ++j)
        {
            if (in[j] == 'y' || in[j] == 'Y' || in[j] == 'e' || in[j] == 'E' || in[j] == 's' || in[j] == 'S')
                continue;
            else
            {
                correct = false;
                break;
            }
        }
        if (correct)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}