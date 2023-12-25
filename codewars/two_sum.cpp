// https://www.codewars.com/kata/52c31f8e6605bcc646000082/train/cpp

#include <algorithm>

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int> &numbers, int target)
{
    for (int i = 0; i < numbers.size(); i++)
    {
        for (int j = i + 1; j < numbers.size(); j++)
        {
            if (numbers[i] + numbers[j] == target)
                return std::pair(i, j);
        }
    }
}