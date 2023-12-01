/*
Given a list of integers, determine whether the sum of its elements is odd or even.

Give your answer as a string matching "odd" or "even".

If the input array is empty consider it as: [0] (array with a zero).


*/
#include <string>
#include <iostream>
#include <vector>
using namespace std;

string odd_or_even(const vector<int> &arr)
{
    int sum = 0;
    for (const int &i : arr)
        sum += i;
    if (sum % 2 == 0)
        return "even";
    return "odd";
}

int main()
{
    vector<int> v{1, 2, 3};
    cout << odd_or_even(v);
}