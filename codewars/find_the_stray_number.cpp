/* 
You are given an odd-length array of integers, in which all of them are the same, except for one single number.

Complete the method which accepts such an array, and returns that single different number.

The input array will always be valid! (odd-length >= 3)
*/
#include <vector>
#include <unordered_map>

int stray(std::vector<int> numbers) {
    std::unordered_map<int, int> m; 
    for (const int& i : numbers) ++m[i]; 
    for (const auto& i : m)
        if (i.second == 1)
            return i.first; 
    return 0; 
};


