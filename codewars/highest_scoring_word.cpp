// https://www.codewars.com/kata/57eb8fcdf670e99d9b000272/train/cpp

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string highestScoringWord(const string &str)
{
    unordered_map<string, int> m{};
    for (int i = 0; i < str.size(); ++i)
    {
        string current = "";
        int len = 0;
        if (str[i] == ' ')
        {
            m[current] = len;
            current = "";
            len = 0;
            continue;
        }
        else
        {
            current += str[i];
            len += str[i] - 96;
        }
    }
    int longest_count = 0;
    string longest_word = "";
    for (const auto &i : m)
        cout << i.first << '\t' << i.second << '\n';

    return longest_word;
}

int main()
{
    string a = "man i need a taxi up to ubud";
    cout << highestScoringWord(a) << '\n';

    return 0;
}