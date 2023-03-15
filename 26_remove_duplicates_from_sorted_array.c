/*
 * -----------------------------------------------------------------------------
 * see: https://leetcode.com/problems/remove-duplicates-from-sorted-array/ 
 * time:       O(nlogn)
 * space:      O(n)
 *
 * Author -    Hayden Howell
 * Email  -    hayde0264@gmail.com
 * Date   -    03/11/2023
 * -----------------------------------------------------------------------------
 */

int removeDuplicates(int* nums, int numsSize) {
  int j = 1;
  for (int i = 1; i < numsSize; i++) {
    if (nums[i] != nums[i - 1]) {
      nums[j] = nums[i];
      j++;
    }
  }
  return j;
}
