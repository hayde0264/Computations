#include <iostream>
#include <vector>

int removeElement(std::vector<int> &nums, int val)
{
    int j = 0;
    int len = nums.size();
    for (int i = 0; i < len; i++)
    {
        if (nums[i] != val)
            nums[j++] = nums[i];
    }
    return j;
}

int main()
{
    std::vector<int> vec = {1, 2, 3, 4};
    removeElement(vec, 1);
    for (auto &i : vec)
        std::cout << i << " ";
    return 0;
}
