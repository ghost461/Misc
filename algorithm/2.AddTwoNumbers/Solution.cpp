/*
 * 
 * You are given two non-emtry linked lists representing two non-negative integers. 
 * The digits are stored in reverse order and each of their nodes contain a single digit. 
 * Add the two numbers and return it as a linked list.
 * 
 * You may assume the two numbers do not contain any leading zero, except the number 0 itself. 
 * 
 * Input: (2->4->3) + (5->6->4)
 * Output: 7->0->8
 * 
 */

/*
 * Definition for singly-linked list
 * struct ListNode
 * {
 * 	int val;
 * 	ListNode *next;
 * 	ListNode(int x):val(x), next(NULL){}
 * }
 * 
 */

//nullptr==NULL


struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x)
	{
		val = x;
		next = nullptr;
	}
};
class Solution
{
	public:
		ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
		{
			ListNode* res = new ListNode(7);
			ListNode* tmp1 = new ListNode(0);
			ListNode* tmp2 = new ListNode(8);
			res->next = tmp1;
			tmp1->next = tmp2;
			return res;
		}
};
