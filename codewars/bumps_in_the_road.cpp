// https://www.codewars.com/kata/57ed30dde7728215300005fa/train/cpp

#include <iostream>
#include <string>

using namespace std;

string bumps(const string &road)
{
    int bumps = 0;
    for (int i = 0; i < road.size(); ++i)
    {
        if (road[i] == 'n')
            bumps++;
    }
    if (bumps <= 15)
        return "Woohoo!";
    else
        return "Car Dead";
}