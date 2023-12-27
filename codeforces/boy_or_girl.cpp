// https://codeforces.com/problemset/problem/236/A

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    string user_name;
    cin >> user_name;

    set<char> s{};
    for (const auto &i : user_name)
        s.insert(i);

    if (s.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}