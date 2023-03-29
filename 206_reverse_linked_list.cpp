// Source : https://leetcode.com/problems/reverse-linked-list/
// Author : Hayden H.
// Date   : 03/25/2023

#include <cstddef>
struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverse(ListNode* head) {
  ListNode *h = NULL, *p = NULL;
  while (head) {
    p = head->next;
    head->next = h;
    h = head;
    head = p;
  }
  return h;
}
