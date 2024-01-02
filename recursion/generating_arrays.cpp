
#include <iostream>
#include <vector>

using namespace std;

vector<int> decreasing_seq(int n)
{
    if (n == 1)
        return {1};
    else
    {
        vector<int> v = decreasing_seq(n - 1);
        v.insert(v.begin(), n);
        return v;
    }
}
/*

*/
vector<int> increasing_seq(int n)
{
    if (n == 1)
    {
        return {1};
    }
    else
    {
        vector<int> v = increasing_seq(n - 1);
        v.push_back(n);
        return v;
    }
}
/*
 */