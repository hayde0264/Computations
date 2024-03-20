
#include <iostream>
#include <vector>
using namespace std;

int letterCounter(vector<vector<char>> arr, char c)
{
    int count = 0;
    for (int i = 0; i < (int)arr.size(); ++i)
    {
        for (int j = 0; j < (int)arr[i].size(); ++j)
        {
            if (arr[i][j] == c)
                count++;
        }
    }
    return count;
}