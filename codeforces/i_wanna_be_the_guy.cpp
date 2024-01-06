// https://codeforces.com/problemset/problem/469/A

#include <iostream>
#include <unordered_set>

using namespace std;

void run()
{
    unordered_set<int> s{};
    int len;
    cin >> len;
    int first;
    cin >> first;
    for (int i = 0; i < first; ++i)
    {
        int element;
        cin >> element;
        s.insert(element);
    }
    int second;
    cin >> second;
    for (int j = 0; j < second; ++j)
    {
        int element;
        cin >> element;
        s.insert(element);
    }
    for (int i = 1; i <= len; ++i)
    {
        auto exist = s.find(i);
        if (exist == s.end())
        {
            cout << "Oh, my keyboard!";
            return;
        }
        else
            continue;
    }
    cout << "I become the guy.";
}

int main()
{
    run();
    return 0;
}