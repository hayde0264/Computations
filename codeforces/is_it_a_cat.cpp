// https://codeforces.com/problemset/problem/1800/A

#include <iostream>
#include <string>

using namespace std;

void run()
{
    int num_of_cases;
    cin >> num_of_cases;
    bool is_cat = true;
    string cat = "";
    while (num_of_cases--)
    {
        int len;
        cin >> len;
        for (int i = 0; i < len; ++i)
        {
            char c;
            cin >> c;
            if (cat.size() == 0)
            {
                if (c == 'm' || c == 'M')
                {
                    cat += 'm';
                    continue;
                }
            }

            if (cat.size() == 1)
            {
                if (c == 'm' || c == 'M')
                {
                    continue;
                }
                else if (c == 'e' || c == 'E')
                {
                    cat += 'e';
                    continue;
                }
                else
                {
                    continue;
                }
            }

            if (cat.size() == 2)
            {
                if (c == 'e' || c == 'E')
                    continue;
                else if (c == 'o' || c == 'O')
                {
                    cat += 'o';
                    continue;
                }
                else
                {
                    continue;
                }
            }

            if (cat.size() == 3)
            {
                if (c == 'o' || c == 'O')
                    continue;
                else if (c == 'w' || c == 'W')
                {
                    cat += 'w';
                    continue;
                }
                else
                {
                    continue;
                }
            }
            if (cat.size() == 4)
            {
                if (c == 'w' || c == 'W')
                    continue;
                else
                    cat+=c; 
            }
        }
        if (cat.size() == 4)
        {
            cout << "YES\n";
            cat.clear();
        }
        else
        {
            cout << "NO\n";
            cat.clear();
        }
    }
}

int main()
{
    run();
    return 0;
}