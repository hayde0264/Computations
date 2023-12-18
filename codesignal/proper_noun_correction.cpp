// https://app.codesignal.com/arcade/code-arcade/book-market/2nSEQ8CGoddTJtnbo
#include <string>
#include <iostream>

using namespace std;

string solution(const string &noun)
{
    string ret = "";
    for (int i = 0; i < noun.size(); i++)
    {
        char current = noun[i];
        if (i == 0)
            ret += toupper(current);
        else
            ret += tolower(current);
    }
    return ret;
}

int main()
{
    string a = "pARIS";
    string b = "John";

    cout << solution(a) << '\n';
    cout << solution(b) << '\n';

    return 0;
}