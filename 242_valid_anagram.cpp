#include <stdio.h>

#include <algorithm>
#include <string>
/*
 * see: https://leetcode.com/problems/valid-anagram/description/
 *
 * space: O(1)
 * time:  O(n)
 */
class Solution {
 public:
  bool isAnagram(std::string s, std::string t);
};
bool Solution::isAnagram(std::string s, std::string t) {
  if (s.length() != t.length()) return false;
  std::sort(s.begin(), s.end());
  std::sort(t.begin(), t.end());
  return s == t;
}
int main() {
  Solution test;
  std::string s = "car";
  std::string t = "rac";
  test.isAnagram(s, t) ? printf("Is anagram...\n")
                       : printf("Is not an anagram...\n");
}
