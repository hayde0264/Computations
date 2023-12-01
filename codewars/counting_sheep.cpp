#include <vector>

int count_sheep(const std::vector<bool> &arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == true)
            sum += 1;
    }

    return sum;
}
