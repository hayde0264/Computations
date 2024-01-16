// https://www.codewars.com/kata/563cf89eb4747c5fb100001b/train/cpp

#include <iostream>
#include <vector>

using namespace std;

vector<unsigned int> removeSmallest(const vector<unsigned int> &numbers)
{
    int smallest = INT16_MAX;
    bool found = false;
    bool inserted = false;
    vector<unsigned int> v{};
    // find smallest
    for (const unsigned int &i : numbers)
        if (i < smallest)
            smallest = i;
    // delete first smallest
    for (const unsigned int &i : numbers)
    {
        if (i == smallest)
            found = true;

        if (found)
        {
            if (inserted)
            {
                v.push_back(i);
            }
            else
            {
                inserted = true;
                continue;
            }
        }
        else
            v.push_back(i);
    }
    return v;
}

int main()
{
    vector<unsigned int> v{1, 2, 3, 4};
    removeSmallest(v);
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << '\t';
}