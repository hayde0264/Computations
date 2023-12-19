// https://www.codewars.com/kata/568dcc3c7f12767a62000038/train/cpp
#include <iostream>

using namespace std;

bool set_alarm(const bool &employed, const bool &vacation)
{
    if (employed && vacation)
    {
        return false;
    }
    else if (employed && !vacation)
    {
        return true;
    }
    else if (!employed && vacation)
    {
        return false;
    }
    else
        return false;
}