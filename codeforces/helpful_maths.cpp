// https://codeforces.com/problemset/problem/339/A

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    string in_str;
    cin >> in_str;

    unordered_map<char, int> m{{'1', 0}, {'2', 0}, {'3', 0}};

    for (int i = 0; i < in_str.size(); ++i)
        if (in_str[i] != '+')
            m[in_str[i]]++;

    string ret_string = "";
    for (int i = 0; i < m['1']; ++i)
        ret_string += "1+";
    for (int i = 0; i < m['2']; ++i)
        ret_string += "2+";
    for (int i = 0; i < m['3']; ++i)
        ret_string += "3+";

    ret_string.pop_back();

    cout << ret_string;
}