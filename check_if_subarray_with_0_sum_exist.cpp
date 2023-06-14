// see:
// time: 0(n)
// space: 0(n)

#include <iostream>
#include <unordered_set>

bool hasSubarrayWithZeroSum(int *arr, int len)
{
    std::unordered_set<int> set;
    set.insert(0);
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
        if (set.find(sum) != set.end())
        {
            return true;
        }
        else
        {
            set.insert(sum);
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, -4};
    int len = sizeof(arr) / sizeof(arr[0]);

    hasSubarrayWithZeroSum(arr, len) ? std::cout << "exist" : std::cout << "does not exist";

    return 0;
}
