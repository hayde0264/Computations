/*
 * see:
 * https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
 *
 * space: O(1)
 * time:  O(n)
 */

#include <sys/resource.h>
#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <vector>

class Solution {
 public:
  int maxProfit(std::vector<int>& prices);
};
int Solution::maxProfit(std::vector<int>& prices) {
  int min = INT32_MAX;
  int profit = 0;
  for (int i = 0; i < prices.size(); i++) {
    min = std::min(min, prices[i]);
    profit = std::max(profit, prices[i] - min);
  }
  return profit;
}
int main() {
  Solution test;
  std::vector<int> prices{7, 1, 5, 3, 6, 4};
  printf("%d\n", test.maxProfit(prices));
  return 0;
}
