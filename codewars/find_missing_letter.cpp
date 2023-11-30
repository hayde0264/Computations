#include <vector>

char findMissingLetter(const std::vector<char> &chars)
{
    for (int i{0}; i < chars.size(); i++)
    {
        if (i > 0)
        {
            if (chars[i - 1] + 1 != chars[i])
                return chars[i - 1] + 1;
        }
    }
}