#include <iostream>
#include <string>
#include <vector>

/*
 * see: https://leetcode.com/problems/zigzag-conversion/
 *
 * space: O(n)
 * time:  O(1)
 */

class Solution {
 public:
  std::string zigZagText(std::string str, int num_of_rows);
};
std::string Solution::zigZagText(std::string str, int num_of_rows) {
  int curr_row = 0, direction = 1;
  std::string answer = "";
  std::vector<std::string> temp(num_of_rows, "");

  if (num_of_rows == 1) return str;

  for (int i = 0; i < str.size(); i++) {
    temp[curr_row] += str[i];

    if (curr_row == num_of_rows - 1) direction = -1;

    if (curr_row == 0) direction = 1;

    curr_row += direction;
  }

  for (int i = 0; i < num_of_rows; i++) {
    answer += temp[i];
  }
  return answer;
}
int main() {
  Solution test;
  std::cout << test.zigZagText("IWANTTOLEARNCODE", 3);
  return 0;
}
