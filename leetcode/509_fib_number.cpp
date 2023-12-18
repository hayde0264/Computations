// https://leetcode.com/problems/fibonacci-number/

#include <iostream>

using namespace std;

class Solution
{
public:
    int fib(int n)
    {
        if (n == 0 || n == 1)
            return n;
        return fib(n - 2) + fib(n - 1);
    }
};

int main()
{
    Solution sol;

    cout << sol.fib(4) << '\n';

    return 0;
}