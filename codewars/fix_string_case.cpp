// https://www.codewars.com/kata/5b180e9fedaa564a7000009a/cpp

#include <iostream>
#include <string>

using namespace std;

string solve(const string &str)
{
    int lower = 0;
    int upper = 0;
    if (str.length() == 0)
        return str;
    string ret_str = "";
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] >= 65 && str[i] <= 90)
            upper++;
        else
            lower++;
    }
    if (lower == 0 || upper == 0 || lower == upper)
        return str;
    if (lower > upper)
        for (int i = 0; i < str.size(); ++i)
        {
            if (str[i] >= 65 && str[i] <= 90)
                ret_str += str[i] + 32;
            else
                ret_str += str[i];
        }
    else
        for (int i = 0; i < str.size(); ++i)
        {
            if (str[i] >= 97 && str[i] <= 122)
                ret_str += str[i] - 32;
            else
                ret_str += str[i];
        }
    return ret_str;
}

int main()
{
    string s = "";
    cout << solve(s) << '\n';

    return 0;
}