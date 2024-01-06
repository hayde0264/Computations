// https://www.codewars.com/kata/580a4734d6df748060000045/train/cpp

#include <iostream>
#include <string>

using namespace std;

string is_sorted_and_how(const vector<int> &array)
{
    bool res = true;
    bool desc = false;
    bool asc = false;

    int first = array[0];
    int second = array[1];
    if (first == second)
        return "no";

    int min = INT16_MIN;
    int max = INT16_MAX;

    if (first < second)
        asc = true;
    else
        desc = true;

    if (asc)
    {
        // check if next is higher if not break
        for (int i = 0; i < array.size(); ++i)
        {
            if (array[i] > min)
                min = array[i];
            else
            {
                res = false;
                break;
            }
        }
    }
    else
    {
        // check if next is lower if not break
        for (int i = 0; i < array.size(); ++i)
        {
            if (array[i] < max)
                max = array[i];
            else
            {
                res = false;
                break;
            }
        }
    }
    if (asc == 1 && res)
        return "yes, ascending";
    else if (desc == 1 && res)
        return "yes, descending";
    else
        return "no";
}

int main()
{
    vector<int> v{2, 1};
    cout << is_sorted_and_how(v);

    return 0;
}