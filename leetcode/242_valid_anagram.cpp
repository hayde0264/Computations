/*
 * see: https://leetcode.com/problems/valid-anagram/description/
 *
 * space: O(1)
 * time:  O(n)
 */
#include <cstdio>
#include <string>
using namespace std;

class Solutiion
{
  public:
    bool isAnagram(string s1, string s2)
    {
        if (s1.size() != s2.size())
            return false;

        unordered_map<char, int> s1_map;
        unordered_map<char, int> s2_map;

        for (int i = 0; i < s1.size(); i++)
        {
            s1_map[s1[i]];
            s2_map[s2[i]];
        }

        for (int i = 0; i < s1_map.size(); i++)
        {
            if (s1_map[i] != s2_map[i])
                return false;
        }

        return true;
    }
};

int main()
{
    Solutiion sol;
    string s1 = "aba";
    string s2 = "aba";
    bool test = sol.isAnagram(s1, s2);
    printf("%d\n", test);
}