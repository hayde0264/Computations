#include <iostream>
#include <vector>

using namespace std;

vector<int> evenOddTransform(const vector<int> &arr, const int &n)
{
    vector<int> ret;
    for (int i = 0; i < (int)arr.size(); ++i)
    {
        int curr = arr[i];
        for (int j = 0; j < n; ++j)
        {
            if (curr % 2 == 0)
                curr -= 2;
            else
                curr += 2;
        }
        ret.push_back(curr);
    }
    return ret;
}

int main()
{
    vector<int> v = {3, 4, 9};
    int a = 3;
    vector<int> v1 = evenOddTransform(v, a);
    for (int i = 0; i < (int)v1.size(); ++i)
        cout << v1[i] << endl;
}