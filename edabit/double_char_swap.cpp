#include <string>
#include <vector>

using namespace std;

string doubleSwap(const string &s, const char &c1, const char &c2)
{
    string ret;
    vector<char> c;
    for (int i = 0; i < (int)s.size(); ++i)
    {
        if (s[i] == c2)
            c.push_back(c1);
        else if (s[i] == c1)
            c.push_back(c2);
        else
            c.push_back(s[i]);
    }
    for (int i = 0; i < (int)c.size(); ++i)
        ret += c[i];
    return ret;
}