/*
Define a function that takes an integer argument and returns a
logical value true or false depending on if the integer is a prime.

Per Wikipedia, a prime number ( or a prime ) is a natural number greater
than 1 that has no positive divisors other than 1 and itself.
*/

#include <iostream>
using namespace std;

bool isPrime(const int &num)
{
    if (num < 2)
        return false;
    int x = sqrt(num);
    for (int i = 2; i <= x; i++)
        if (num % i == 0)
            return false;
    return true;
}