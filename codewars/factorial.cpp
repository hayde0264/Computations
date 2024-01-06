// https://www.codewars.com/kata/57a049e253ba33ac5e000212/train/cpp

#include <iostream>

using namespace std;

long long factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    cout << factorial(5);

    return 0;
}