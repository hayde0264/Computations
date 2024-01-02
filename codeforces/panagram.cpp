// https://codeforces.com/problemset/problem/520/A

#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    int chars;
    string word;
    cin >> chars;
    cin >> word;

    string lower_word = "";

    for (int i = 0; i < chars; ++i)
    {
        if (word[i] >= 90 && word[i] <= 122)
            lower_word += word[i];
        else
            lower_word += word[i] + 32;
    }

    unordered_set<char> s{};

    for (int i = 0; i < chars; ++i)
    {
        s.insert(lower_word[i]);
    }

    if (s.size() == 26)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';

    return 0;
}