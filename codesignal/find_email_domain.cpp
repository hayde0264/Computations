// https://app.codesignal.com/arcade/code-arcade/book-market/TXFLopNcCNbJLQivP
#include <string>
#include <iostream>
using namespace std;

string solution(const string &address)
{
    string ret = "";
    int spot = 0;
    for (int i = 0; i < address.size(); ++i)
    {
        if (address[i] == '@')
            spot = i;
    }
    for (int i = spot + 1; i < address.size(); i++)
        ret += address[i];
    return ret;
}

int main()
{
    string s1 = "pretty@gmail.com";
    string s2 = "aaa@yahoo.com";
    string s3 = "bbb@hotmail.com";

    cout << solution(s1) << '\n'
         << solution(s2) << '\n'
         << solution(s3) << '\n';

    return 0;
}