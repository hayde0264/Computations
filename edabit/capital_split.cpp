#include <iostream>
#include <vector>

using namespace std;

string capSpace(const string &txt)
{
    vector<int> in;
    for (int i = 0; i < (int)txt.size(); ++i)
        if (txt[i] >= 65 && txt[i] <= 90)
        {
            in.push_back(i);
        }
    string ret_str;

    int curr_in = 0;
    for (int i = 0; i < (int)txt.size(); ++i)
    {
        if (i == in[curr_in])
        {
            ret_str += " ";
            i -= 1;
            curr_in++;
        }
        else
        {
            ret_str += tolower(txt[i]);
        }
    }

    return ret_str;
}
int main()
{
    string a = capSpace("helloWorld");
    cout << a << endl;
}