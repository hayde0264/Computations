#include <iostream>
using namespace std;

void tail_iter(int n)
{

    if (n == 0)
        return;

    cout << n << '\n';

    tail_iter(n - 1);
}

void head_iter(int n)
{

    if (n == 0)
        return;

    head_iter(n - 1);

    cout << n << '\n';
}

int main()
{
    tail_iter(5);
    cout << "\n\n\n";
    head_iter(5);
}
