#include <iostream>

using namespace std;

string mysteryFunc(const string &s)
{
    string ret_string;
    int amount = 0;
    for (int i = 0; i < (int)s.size(); ++i)
    {
        char current = s[i];
        if (isdigit(current))
        {
            amount = current - 48;
            for (int j = 0; j < amount; ++j)
                ret_string += s[i - 1];
        }
        amount = 0;
    }
    return ret_string;
}

int main()
{
    string a = mysteryFunc("A4B5C2");
    cout << a << endl;
}