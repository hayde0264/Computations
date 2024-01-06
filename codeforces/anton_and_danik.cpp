// https://codeforces.com/problemset/problem/734/A

#include <iostream>
#include <string>

using namespace std;

void solution()
{
    int games;
    cin >> games;

    string winner;
    cin >> winner;

    int anton = 0;
    int danik = 0;
    for (int i = 0; i < winner.size(); ++i)
    {
        if (winner[i] == 'A')
            anton++;
        else
            danik++;
    }
    if (anton == danik)
        cout << "Friendship";
    else if (anton > danik)
        cout << "Anton";
    else
        cout << "Danik";
}

int main()
{
    solution();
    return 0;
}