/*
Create a function that takes an integer
as an argument and returns "Even" for even numbers or
"Odd" for odd numbers.
*/
#include <iostream>
#include <string>
using std::string, std::cout;

string even_or_odd(int number)
{
    if (number % 2 == 0)
    {
        return "Even";
    }
    return "Odd";
}
