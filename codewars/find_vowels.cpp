// https://www.codewars.com/kata/5680781b6b7c2be860000036/train/cpp

#include <iostream>
#include <string>

using namespace std;

vector<int> vowelIndices(const string &word)
{
    vector<int> res{};
    for (int i = 0; i < word.size(); ++i)
    {
        if (word[i] == 'a' || word[i] == 'A' || word[i] == 'e' || word[i] == 'E' || word[i] == 'i' || word[i] == 'I' ||
            word[i] == 'o' || word[i] == 'O' || word[i] == 'u' || word[i] == 'U' || word[i] == 'y' || word[i] == 'Y')
            res.push_back(i + 1);
    }
    return res;
}
