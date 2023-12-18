// https://app.codesignal.com/arcade/code-arcade/book-market/MX94DWTrwQw2gLrTi
#include <iostream>
#include <string>
using namespace std;

string solution(const string &startTag)
{
    // determine if whitespace
    int has_space = 0;
    for (int i = 0; i < startTag.size(); i++)
        if (startTag[i] == ' ')
            has_space = 1;

    string ret = "";

    // if no space
    if (has_space == 1)
    {
    }
    // if space
    else
    {
    }
}

int main()
{

    string a = "<i>";
    string b = "<button>";

    cout << solution(a) << '\n'
         << solution(b) << '\n';

    return 0;
}
