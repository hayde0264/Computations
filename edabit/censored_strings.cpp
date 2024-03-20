#include <iostream>

using namespace std;

string uncensor(const string &str, const string &vowels)
{
    string ret_string;
    int current = 0;
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == '*')
        {
            ret_string += vowels[current];
            current++;
        }
        else
            ret_string += str[i];
    }
    return ret_string;
}

int main()
{

    string a = uncensor("Wh*r* d*d my v*w*ls g*?", "eeioeo");
    cout << a << endl;
}