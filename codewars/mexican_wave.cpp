// https://www.codewars.com/kata/58f5c63f1e26ecda7e000029/train/cpp
#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<string> wave(const string &y)
{
    vector<string> ret{};
    for (int i = 0; i < y.size(); i++)
    {
        if (y[i] == ' ')
            continue;
        else
        {
            string current = y;
            char make_upper = toupper(y[i]);
            current[i] = make_upper;
            ret.push_back(current);
        }
    }
    return ret;
}
int main()
{
    string a = "hello";
    vector<string> v = wave(a);
    for (const string &i : v)
        cout << i << '\n';

    return 0;
}