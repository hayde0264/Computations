/*
 * -----------------------------------------------------------------------------
 * see:
 * https:      www.techiedelight.com/find-all-duplicate-elements-in-a-limited-range-array/
 * time:       O(n)
 * space:      O(1)
 *
 * Author -    Hayden Howell
 * Email  -    hayde0264@gmail.com
 * Date   -    03/16/2023
 * -----------------------------------------------------------------------------
 */

#include <iostream>
#include <unordered_set>
#include <vector>

std::unordered_set<int> findDuplicates(std::vector<int> nums)
{
    std::unordered_set<int> res;
    for (int i : nums)
    {
        int index = abs(i) - 1;
        if (nums[index] < 0)
        {
            res.insert(abs(i));
        }
        nums[index] = -nums[index];
    }
    return res;
}
int main()
{
    std::vector<int> nums = {5, 3, 4, 2, 5, 1, 2};

    std::unordered_set<int> result = findDuplicates(nums);
    for (auto &i : result)
    {
        std::cout << i << ' ';
    }

    return 0;
}
