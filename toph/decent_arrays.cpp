// https://toph.co/p/decent-arrays
#include <iostream>
#include <vector>

using namespace std;

void run()
{
    int num;
    cin >> num;
    bool t = true;
    vector<int> v{};
    for (int i = 0; i < num; ++i)
    {
        int curr;
        cin >> curr;
        v.push_back(curr);
    }
    int p1 = 0;
    int p2 = 1;
    while (p2 < num)
    {
        if (v[p1] > v[p2])
        {
            t = false;
            break;
        }
        p1++;
        p2++;
    }
    if (t)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main()
{
    run();
    return 0;
}