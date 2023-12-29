#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    string s2;

    cin >> s1;
    cin >> s2;

    int ptr = s2.size() - 1;

    string result = "";

    for (int i = 0; i < s1.size(); ++i)
    {
        if (s1[i] == s2[ptr])
        {
            ptr--;
            result = "YES";
            continue;
        }
        else
        {
            result = "NO";
            break;
        }
    }
    if (result == "YES")
        cout << "YES";
    else
        cout << "NO";
}