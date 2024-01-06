// https://www.codewars.com/dashboard

#include <iostream>
#include <vector>

using namespace std;

vector<int> invert(const vector<int> &values)
{
    vector<int> ret{};
    if (values.size() == 0)
        return {};
    for (int i = 0; i < values.size(); ++i)
    {
        if (values[i] > 0)
            ret.push_back(-values[i]);
        else
            ret.push_back(abs(values[i]));
    }
    return ret;
}
