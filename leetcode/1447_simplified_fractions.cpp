#include <vector>
#include <string>
#include <map>
#include <iostream>

class Solution {
public:
    std::vector<std::string> simplifiedFractions(int n) {
        std::map<std::string, int> m {{"1/2", 2}, {"1/3", 3}, {"1/4", 4}, {"2/3", 3}, {"3/4", 4}}; 
        std::vector<std::string> v; 
        for (const auto& i : m)
            if (i.second <= n)
                v.push_back(i.first); 
        return v;  
    }
};

int main() 
{ 
    Solution sol; 
    auto out = sol.simplifiedFractions(4);
    for (auto i = out.begin(); i < out.end(); i++)
        std::cout << *i << '\n'; 
}
