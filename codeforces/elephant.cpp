// https://codeforces.com/problemset/problem/617/A

#include <iostream>

using namespace std;

void run()
{
    int n, ans = 0;
    int a[] = {5, 4, 3, 2, 1};
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        ans += n / a[i];
        n = n % a[i];
    }
    cout << ans << endl;
}

int main()
{
    run();
    return 0;
}