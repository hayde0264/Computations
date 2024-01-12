// https://codeforces.com/problemset/problem/707/A

#include <iostream>
#include <vector>

using namespace std;

void run()
{
    int rows, columns;
    cin >> rows;
    cin >> columns;

    vector<vector<char>> v{};

    for (int i = 0; i < rows; ++i)
    {
        vector<char> v_curr{};
        for (int j = 0; j < columns; ++j)
        {
            char curr;
            cin >> curr;
            v_curr.push_back(curr);
        }
        v.push_back(v_curr);
        v_curr.clear();
    }

    for (int i = 0; i < v.size(); ++i)
    {
        for (int j = 0; j < v[i].size(); ++j)
        {
            if (v[i][j] == 'W' || v[i][j] == 'B' || v[i][j] == 'G')
                continue;
            else
            {
                cout << "#Color\n";
                return;
            }
        }
    }
    cout << "#Black&White\n";
}

int main()
{
    run();
    return 0;
}