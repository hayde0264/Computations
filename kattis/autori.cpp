// https://open.kattis.com/problems/autori

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    cin >> name;

    string out = "";
    out.push_back(name.front());

    for (int i = 1; i < name.size(); ++i)
    {
        if (name[i] == '-')
        {
            out += name[i + 1];
            ++i;
        }
        else
            continue;
    }

    cout << out << '\n';
}