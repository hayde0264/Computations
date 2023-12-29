// https://www.codewars.com/kata/57cc981a58da9e302a000214/train/cpp

#include <vector>

using namespace std;

bool small_enough(const vector<int> &arr, const int &limit)
{
    bool res = true;
    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] > limit)
        {
            res = false;
            break;
        }
       }
    return res;
}