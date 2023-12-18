// https://app.codesignal.com/arcade/code-arcade/book-market/G9wj2j6zaWwFWsise
#include <string>
#include <iostream>
using namespace std;

bool solution(std::string s)
{
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (toupper(s[i]) != toupper(s[s.size() - 1 - i]))
        {
            return false;
        }
    }
    return true;
}
