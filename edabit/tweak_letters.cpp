#include <iostream>
#include <vector>

using namespace std;

string tweakLetters(const string &s, const vector<int> &arr)
{
    string ret_string = "";
    int curr = 0;
    for (int i = 0; i < (int)arr.size(); ++i)
    {
        int current = s[i];
        char actual = current;
        if (actual == 'z' && arr[curr] != 0)
        {
            ret_string += 'a';
            curr++;
            continue;
        }
        if (actual == 'a' && arr[curr] != 0)
        {
            ret_string += 'z';
            curr++;
            continue;
        }

        if (arr[curr] > 0)
        {

            actual = current + arr[curr];
            ret_string += actual;
        }
        else if (arr[curr] == 0)
            ret_string += actual;
        else
        {
            actual = current - abs(arr[curr]);
            ret_string += actual;
        }
        curr++;
    }
    return ret_string;
}

int main()
{
    vector<int> v = {0, 0, 0, -1};
    string let = tweakLetters("many", v);
    cout << let << endl;
}