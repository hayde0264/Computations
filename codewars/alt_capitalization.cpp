// https://www.codewars.com/kata/59cfc000aeb2844d16000075/cpp

#include <iostream>
#include <string>
#include <utility>

using namespace std;

pair<string, string> capitalize(const string &s)
{
    string cap_first = "";
    string lower_first = "";
    // capfirst iter
    for (int i = 0; i < s.size(); ++i)
    {
        if (i % 2 == 0)
            cap_first += s[i] - 32;
        else
            cap_first += s[i];
    }
    // lower first iter
    for (int i = 0; i < s.size(); ++i)
    {
        if (i % 2 != 0)
            lower_first += s[i] - 32;
        else
            lower_first += s[i];
    }
    return {cap_first, lower_first};
}

int main()
{
    auto pair = capitalize("abcdef");
    cout << pair.first << '\n';
    cout << pair.second << '\n';

    return 0;
}