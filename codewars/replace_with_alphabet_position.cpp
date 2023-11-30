#include <string>

std::string alphabet_position(const std::string &text)
{
    std::string res = "";

    for (char c : text)
    {
        c = tolower(c);
        if ('a' <= c && c <= 'z')
        {
            if (res != "")
            {
                res += " ";
            }
            res += std::to_string(c - 'a' + 1);
        }
    }

    return res;
}