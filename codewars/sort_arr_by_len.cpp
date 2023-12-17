// https://www.codewars.com/kata/57ea5b0b75ae11d1e800006c/train/cpp
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

std::vector<std::string> sortByLength(std::vector<std::string> s)
{
    std::sort(s.begin(), s.end(), [](std::string a, std::string b)
              { return a.size() < b.size(); });
    return s;
}