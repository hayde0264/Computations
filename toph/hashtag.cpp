// https://toph.co/p/hashtag

#include <iostream>
#include <string>

using namespace std;

void run()
{
    string s;
    getline(cin, s);
    string ret = "";
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == ' ')
            continue;
        else
            ret += s[i];
    }
    cout << ret;
}

int main()
{
    run();
    return 0;
}