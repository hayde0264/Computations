#include <iostream>
#include <unordered_set>
#include <vector>

bool containsDuplicate(std::vector<int> &nums)
{
    std::unordered_set<int> hash;
    int len = nums.size();
    for (int i = 0; i < nums.size(); i++)
    {
        if (hash.count(nums[i]))
            return true;
        hash.insert(nums[i]);
    }
    return false;
}

int main()
{
    std::vector<int> v{1, 1, 2, 3};
    bool res = containsDuplicate(v);
    res == 1 ? std::cout << "conatins duplicate\n" : std::cout << "do not contain duplicate\n";

    return 0;
}
