// https://www.codewars.com/dashboard

#include <iostream>
#include <string>

using namespace std;

class Accumul
{
  public:
    static string accum(const string &s);
};

string Accumul::accum(const string &s)
{
    int count = 1;
    int restart = 0;
    string ret_str = "";
    for (int i = 0; i < s.size(); ++i)
    {
        char current = s[i];
        if (current >= 97 && current <= 122)
            current = s[i] - 32;
        for (int i = 0; i < count; ++i)
        {
            if (i == 0)
            {
                ret_str.push_back(current);
            }
            else
            {
                ret_str.push_back(current + 32);
            }
        }
        ret_str.push_back('-');
        count++;
    }
    ret_str.pop_back();
    return ret_str;
}

int main()
{
    Accumul a;
    cout << a.accum("cwAt");
}