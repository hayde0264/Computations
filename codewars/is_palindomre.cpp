// https://www.codewars.com/kata/57a1fd2ce298a731b20006a4/train/cpp
#include <string>
#include <iostream>
using namespace std;

bool isPalindrome(const string &str)
{
    if (str.size() == 1)
        return true;
    string rev = "";
    string lower = "";
    for (auto &c : str)
        lower += tolower(c);
    for (int i = str.length() - 1; i >= 0; --i)
        rev += tolower(str[i]);
    if (rev == lower)
        return true;
    else
        return false;
}

int main()
{
    string a = "a";
    string b = "aba";
    string c = "Abba";
    string d = "hello";

    cout << isPalindrome(a) << '\n';
    cout << isPalindrome(b) << '\n';
    cout << isPalindrome(c) << '\n';
    cout << isPalindrome(d) << '\n';
}