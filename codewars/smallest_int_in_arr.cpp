// https://www.codewars.com/kata/55a2d7ebe362935a210000b2/train/cpp

#include <iostream>
#include <vector>

using namespace std;

int findSmallest(vector<int> list)
{
    int smallest = list.front();
    for (const int &i : list)
    {
        if (i < smallest)
            smallest = i;
    }
    return smallest;
}

int main()
{
    vector<int> v{25, 15, 88, 2};
    vector<int> v1{34, -345, -1, 100};

    cout << findSmallest(v) << '\n';
    cout << findSmallest(v1) << '\n';

    return 0;
}