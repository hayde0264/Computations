#include <string.h>

#include <iostream>
#include <string>

using std::string, std::cout;

/*
 *
 * space: O(1)
 * time:  O(n)
 */
string reverseString(string &str) {
  int i = str.length(), start = 0, end = i - 1;
  while (start <= end) {
    str[start] ^= str[end];
    str[end] ^= str[start];
    str[start] ^= str[end];
    start++;
    end--;
  }
  return str;
}
int main() {
  string a = "hayden";
  reverseString(a);
  cout << a;
  return 0;
}
