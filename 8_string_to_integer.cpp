#include <cctype>
#include <climits>
#include <cstdint>
#include <iostream>
#include <string>
/*
 * see: https://leetcode.com/problems/string-to-integer-atoi/description/
 *
 * space: O(n)
 * time:  O(1)
 */
class Solution {
 public:
  int myAtoi(std::string s);

 private:
  bool isDigit(char ch) { return ch >= '0' && ch <= '9'; }
};
int Solution::myAtoi(std::string str) {
  int index = 0, result = 0, digit = 0;
  const int len = str.size();
  bool isNegative = false;
  if (len == 0) return 0;
  while (index < len && str[index] == ' ') {
    ++index;
  }
  if (index < len) {
    if (str[index] == '-') {
      isNegative = true;
      ++index;
    } else if (str[index] == '+') {
      ++index;
    }
  }
  while (index < len && isDigit(str[index])) {
    digit = str[index] - '0';
    if (result > (INT_MAX / 10) || (result == (INT_MAX / 10) && digit > 7)) {
      return isNegative ? INT_MIN : INT_MAX;
    }

    result = (result * 10) + digit;
    ++index;
  }
  return isNegative ? -result : result;
}
int main() {
  Solution test;
  std::string str = " 11";
  std::cout << test.myAtoi(str) << '\n';
  return 0;
}
