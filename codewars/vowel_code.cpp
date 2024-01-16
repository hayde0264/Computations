// https://www.codewars.com/kata/53697be005f803751e0015aa/train/cpp

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string encode(const string &str)
{
    unordered_map<char, int> m{{'a', 1}, {'e', 2}, {'i', 3}, {'o', 4}, {'u', 5}};
    string ret = "";
    for (int i = 0; i < str.size(); ++i)
    {
        if (m.find(str[i]) != m.end())
            ret += to_string(m[str[i]]);
        else
            ret += str[i];
    }
    return ret;
}

string decode(const string &str)
{
    unordered_map<char, char> m{{'1', 'a'}, {'2', 'e'}, {'3', 'i'}, {'4', 'o'}, {'5', 'u'}};
    string ret = "";
    for (int i = 0; i < str.size(); ++i)
    {
        if (m.find(str[i]) != m.end())
            ret += m[str[i]];
        else
            ret += str[i];
    }
    return ret;
}

int main()
{
    string a = "h2ll4";
    cout << decode(a) << '\n';
    return 0;
}