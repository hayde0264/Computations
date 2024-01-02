// https://www.codewars.com/kata/583710ccaa6717322c000105/train/cpp

#include <iostream>

using namespace std;

int simpleMultiplication(int a)
{
    if (a % 2 == 0)
        return a * 8;
    else
        return a * 9;
}
