#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<string> solution(const string &s)
{
    vector<string> v{};
    for (int i = 0; i < s.size(); ++i)
    {
        char first = s[i];
        char second = s[i + 1];
        stringstream ss;
        ss << first << second;
        string together = ss.str();
        v.push_back(together);
    }
    if (v.size() % 2 == 0)
        return v;
    else
    {
        v.back().push_back('_');
        return v;
    }
}

int main()
{
    string a = "abc";
    vector<string> v = solution(a);
    for (const string &i : v)
        cout << i << "\n";
    return 0;
}