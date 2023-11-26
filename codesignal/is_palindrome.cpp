#include <iostream>
#include <vector>
using namespace std;

bool solution(string inputString)
{
    string first = "";
    string second = "";
    int middle = inputString.length() / 2;
    if (inputString.length() == 1)
        return true;
    for (int i = 0; i < middle; i++)
        first += inputString[i];
    for (int i = middle + 1; i < inputString.length(); i++)
        second += inputString[i];
    return first == second;
}
