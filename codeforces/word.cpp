#include <iostream>
#include <string>

using namespace std;

int main()
{
    string in_str;

    cin >> in_str;

    int lower = 0;
    int upper = 0;

    for (const char &i : in_str)
        if (i >= 65 && i <= 90)
            upper++;
        else
            lower++;

    // return strings
    string upper_str = "";
    string lower_str = "";

    // loop to make chars upper
    for (int i = 0; i < in_str.size(); ++i)
        if (in_str[i] >= 65 && in_str[i] <= 90)
            upper_str.push_back(in_str[i]);
        else
            upper_str.push_back(in_str[i] - 32);

    // loop to make chars lower
    for (int i = 0; i < in_str.size(); ++i)
        if (in_str[i] >= 97 && in_str[i] <= 122)
            lower_str.push_back(in_str[i]);
        else
            lower_str.push_back(in_str[i] + 32);

    if (upper > lower)
        cout << upper_str;
    else
        cout << lower_str;
}