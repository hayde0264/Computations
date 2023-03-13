#include <cstddef>
#include <cstdio>
/*
 * see: https://leetcode.com/problems/reverse-linked-list/description/
 *
 * space: O(1)
 * time:  O(n)
*/

struct Node 
{
		int data;
		Node* next;
};
struct Solution 
{
	Node* reverse(Node* head);
};
Node* Solution::reverse(Node* head) 
{
	Node* prev = nullptr;
	Node* curr = head;
	while(curr) 
	{
		Node* nextTemp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nextTemp;
	}
	return prev;
}
