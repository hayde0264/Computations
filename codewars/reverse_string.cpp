// https://www.codewars.com/kata/5168bb5dfe9a00b126000018/train/cpp

#include <iostream>
#include <string>

using namespace std;

string reverseString(const string &str)
{
    string ret = "";
    int last = str.length() - 1;
    while (last >= 0)
    {
        ret.push_back(str[last]);
        last--;
    }
    return ret;
}

int main()
{
    string a = "hayden";
    cout << reverseString(a);
}