// https://www.codewars.com/kata/514b92a657cdc65150000006/train/cpp

#include <iostream>
using namespace std;

int solution(const int &number)
{
    int total = 0;
    for (int i = 0; i < number; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            total += i;
    }
    return total;
}

int main()
{
    cout << solution(10) << '\n';
    return 0;
}