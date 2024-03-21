#include <iostream>

using namespace std;

bool isValidHexCode(const string &str)
{
    if (str[0] != '#' || (int)str.size() != 7)
        return false;

    for (int i = 0; i < (int)str.size(); ++i)
    {
        int curr = str[i];
        bool should_continue = false;

        // if #
        if (curr == 35)
            should_continue = true;
        // if 0-9
        if (curr >= 48 && curr <= 57)
            should_continue = true;
        // if A-F
        if (curr >= 65 && curr <= 70)
            should_continue = true;
        // if a-f
        if (curr >= 97 && curr <= 102)
            should_continue = true;

        if (should_continue)
        {
            should_continue = false;
        }
        else
            return false;
    }
    return true;
}

int main()
{
    bool test = isValidHexCode("#EAECEE");
    cout << test << endl;
}