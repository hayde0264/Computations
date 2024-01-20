// https://toph.co/p/divisors

#include <iostream>

using namespace std;

void run()
{
    int num;
    cin >> num;
    for (int i = 1; i <= num; ++i)
    {
        if (num % i == 0)
            cout << i << '\n';
    }
}
int main()
{
    run();
    return 0;
}