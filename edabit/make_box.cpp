#include <iostream>
#include <vector>

using namespace std;

vector<string> makeBox(int n)
{
    vector<string> ret;
    bool is_first = true;
    for (int i = 0; i < n; ++i)
    {
        string s;
        // if first
        if (is_first)
        {

            for (int j = 0; j < n; ++j)
                s += "#";
            ret.push_back(s);
            is_first = false;
            s.clear();
            continue;
        }
        // if last
        if (n - i == 1)
        {
            for (int j = 0; j < n; ++j)
                s += "#";
            ret.push_back(s);
            break;
        }
        if (i > 0)
        {
            // if middle case
            for (int j = 0; j < n; ++j)
            {
                if (j == 0)
                    s += "#";
                else if (n - j == 1)
                    s += "#";
                else
                    s += " ";
            }
            ret.push_back(s);
        }
    }
    return ret;
}

int main()
{
    vector<string> s = makeBox(5);
    for (int i = 0; i < s.size(); ++i)
        cout << s[i] << endl;
    return 0;
}