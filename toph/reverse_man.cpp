// https://toph.co/p/reverse-man

#include <iostream>
#include <string>

using namespace std;

void run()
{
    string s;
    getline(cin, s);
    int len = s.size();
    string ret = "";
    while (len--)
    {
        auto back = s.at(len);
        ret += back;
    }
    cout << ret;
}
int main()
{
    run();
    return 0;
}