// https://www.codewars.com/kata/555eded1ad94b00403000071/train/cpp

#include <iostream>
#include <string>
using namespace std;

int seriesSum(const int &n)
{
    if (n < 1)
        return n;
    int denom = 3;
    int iter = 0;
    float sum = 0.f;
    while (iter < n)
    {
        sum += static_cast<float>(1 / denom);
        iter++;
        denom += 3;
    }
    return sum;
}

int main()
{
    cout << seriesSum(9);
}