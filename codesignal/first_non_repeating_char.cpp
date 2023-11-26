#include <iostream>
#include <unordered_map>
using namespace std;

char solution(string s)
{

    unordered_map<char, int> M;
    for (int i = 0; i < s.length(); i++)
    {
        M[s[i]]++;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (M[s[i]] == 1)
            return s[i];
    }
    return '_';
}
