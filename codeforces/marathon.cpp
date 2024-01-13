// https://codeforces.com/problemset/problem/1692/A

#include <iostream>
#include <vector>

using namespace std;

void run()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        vector<int> v{};
        for (int i = 0; i < 4; ++i)
        {
            int score;
            cin >> score;
            v.push_back(score);
        }
        int timur_score = v[0];
        int greater = 0;

        for (int i = 1; i < 4; ++i)
        {
            if (v[i] > timur_score)
                greater++;
        }
        cout << greater << '\n';
        v.clear();
        greater = 0;
    }
}

int main()
{
    run();
    return 0;
}