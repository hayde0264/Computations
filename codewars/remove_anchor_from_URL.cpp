// https://www.codewars.com/kata/51f2b4448cadf20ed0000386/train/cpp
#include <string>
#include <iostream>

using namespace std;

string replaceAll(const string &str)
{
    string ret = "";
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] != '#')
            ret += str[i];
        else
            break;
    }
    return ret;
}